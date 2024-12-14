/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joleksia <joleksia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 09:08:23 by joleksia          #+#    #+#             */
/*   Updated: 2024/12/14 10:08:02 by joleksia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int ch, size_t count)
{
	unsigned char	*dcpy;

	dcpy = (unsigned char *) dest;
	if (!dest)
		return (NULL);
	while (count--)
		*dcpy++ = ch;
	return (dest);
}
