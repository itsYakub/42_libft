/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joleksia <joleksia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 09:51:31 by joleksia          #+#    #+#             */
/*   Updated: 2024/12/14 15:03:26 by joleksia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t count)
{
	char	*d;

	d = dest;
	while (*src && (ssize_t) count-- > 0)
		*dest++ = *src++;
	while ((ssize_t) count-- > 0)
		*dest++ = '\0';
	return (d);
}
