/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joleksia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 09:57:09 by joleksia          #+#    #+#             */
/*   Updated: 2024/12/07 10:33:16 by joleksia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Source:																	*
 * https://github.com/openbsd/src/blob/master/lib/libc/string/strlcpy.c		*/
size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	char	*org_s;
	int		nleft;
	char	*check;

	org_s = (char *) src;
	nleft = (int) size;
	if (nleft)
	{
		while (--nleft)
		{
			check = dst;
			*dst++ = *src++;
			if (check == 0)
				break ;
		}
	}
	if (!nleft)
	{
		if (!size)
			*dst = 0;
		while (*src++)
			;
	}
	return (src - org_s - 1);
}
