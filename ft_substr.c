/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joleksia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 15:26:05 by joleksia          #+#    #+#             */
/*   Updated: 2024/12/08 16:33:01 by joleksia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;
	char	*rcpy;
	size_t	bytes;

	if (start >= (size_t) ft_strlen(s))
		start = (size_t) ft_strlen(s);
	s += start;
	bytes = 0;
	if (len >= (size_t) ft_strlen(s))
		bytes = (size_t) ft_strlen(s);
	else
		bytes = len;
	result = (char *) ft_calloc(bytes + 1, sizeof(char));
	if (!result)
		return (NULL);
	rcpy = result;
	while (*s && bytes--)
		*rcpy++ = *s++;
	return (result);
}
