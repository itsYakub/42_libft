/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joleksia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 09:15:26 by joleksia          #+#    #+#             */
/*   Updated: 2024/12/07 09:41:06 by joleksia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t count)
{
	char	*lasts;
	char	*lastd;

	if (dest < src)
		dest = ft_memcpy(dest, src, count);
	else
	{
		lasts = src + (count - 1);
		lastd = dest + (count - 1);
		while (count--)
			*lastd-- = *lasts--;
	}
	return (dest);
