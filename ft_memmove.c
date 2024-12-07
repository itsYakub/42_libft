/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joleksia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 09:15:26 by joleksia          #+#    #+#             */
/*   Updated: 2024/12/07 16:53:09 by joleksia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t count)
{
	unsigned char	*dcpy;
	unsigned char	*scpy;
	unsigned char	*lasts;
	unsigned char	*lastd;

	dcpy = (unsigned char *) dest;
	scpy = (unsigned char *) src;
	if (dest < src)
		dest = ft_memcpy(dest, src, count);
	else
	{
		lasts = scpy + (count - 1);
		lastd = dcpy + (count - 1);
		while (count--)
			*lastd-- = *lasts--;
	}
	return (dest);
}
