/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joleksia <joleksia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 09:51:31 by joleksia          #+#    #+#             */
/*   Updated: 2024/12/14 10:09:59 by joleksia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t count)
{
	char	*d;

	d = dest;
	if (!dest || !src)
		return (NULL);
	while (count--)
		*dest++ = *src++;
	return (d);
}
