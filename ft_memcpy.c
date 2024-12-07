/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joleksia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 09:13:50 by joleksia          #+#    #+#             */
/*   Updated: 2024/12/07 16:35:23 by joleksia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t count)
{
	unsigned char	*dcpy;
	unsigned char	*scpy;
	int				i;

	i = 0;
	dcpy = (unsigned char *) dest;
	scpy = (unsigned char *) src;
	while (scpy[i] && dcpy[i] && i < (int) count)
	{
		dcpy[i] = scpy[i];
		i++;
	}
	return (dest);
}
