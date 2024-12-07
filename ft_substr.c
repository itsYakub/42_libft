/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joleksia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 15:26:05 by joleksia          #+#    #+#             */
/*   Updated: 2024/12/07 15:44:48 by joleksia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;
	int		i;

	if (!s)
		return (NULL);
	result = ft_calloc(len + 1, sizeof (char));
	if (!result)
		return (NULL);
	s += start;
	i = -1;
	while (++i < (int) len)
		result[i] = s[i];
	return (result);
}
