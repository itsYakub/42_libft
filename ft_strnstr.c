/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joleksia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 12:40:52 by joleksia          #+#    #+#             */
/*   Updated: 2024/12/07 13:31:24 by joleksia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char			*sptr;
	char			*sptr_prev;
	long long int	l;

	if (!little || !ft_strlen(little))
		return ((char *) big);
	l = (long long int) len;
	sptr_prev = (char *) big;
	sptr = ft_strchr(big, little[0]);
	while (sptr && l)
	{
		l -= sptr - sptr_prev;
		if (l <= 0)
			break ;
		if (!ft_strncmp(sptr, (char *) little, (size_t) ft_strlen(little)))
			return (sptr);
		sptr_prev = sptr;
		sptr = ft_strchr(sptr + 1, little[0]);
	}
	return (NULL);
}
