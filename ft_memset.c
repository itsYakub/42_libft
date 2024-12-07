/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joleksia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 09:08:23 by joleksia          #+#    #+#             */
/*   Updated: 2024/12/07 16:53:27 by joleksia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int ch, size_t count)
{
	unsigned char	*dcpy;
	int				i;

	i = 0;
	dcpy = (unsigned char *) dest;
	while (i < (int) count)
		dcpy[i] = ch;
	return (dest);
}
