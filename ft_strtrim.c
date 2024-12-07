/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joleksia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 16:05:35 by joleksia          #+#    #+#             */
/*   Updated: 2024/12/07 16:17:16 by joleksia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*result;

	if (!s1)
		return (NULL);
	result = (char *) malloc((ft_strlen(s1) + 1) * sizeof(char));
	if (!result)
		return (NULL);
	i = -1;
	j = -1;
	while (s1[++i])
	{
		if (!ft_strchr(set, s1[i]))
			result[++j] = s1[i];
	}
	result[++j] = 0;
	return (result);
}
