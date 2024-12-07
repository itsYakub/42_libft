/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joleksia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 10:00:36 by joleksia          #+#    #+#             */
/*   Updated: 2024/12/07 14:50:00 by joleksia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char	*org_s;
	char	*org_d;
	int		n;
	int		len;

	org_s = (char *) src;
	org_d = (char *) dst;
	n = size;
	while (n-- != 0 && *dst != 0)
		dst++;
	len = dst - org_d;
	n = size - len;
	if (n-- == 0)
		return (len + strlen(src));
	while (*src != 0)
	{
		if (n-- != 0)
			*dst++ = *src;
		src++;
	}
	*dst = 0;
	return (len + (src - org_s));
}
