/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joleksia <joleksia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 16:05:35 by joleksia          #+#    #+#             */
/*   Updated: 2024/12/13 08:05:34 by joleksia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	char	*sptr;
	char	*sstart;
	char	*send;

	sstart = (char *) s1;
	while (*sstart && ft_strchr(set, *sstart))
		sstart++;
	send = (char *) s1 + ft_strlen(s1);
	while (send > sstart && ft_strchr(set, *send))
		send--;
	str = (char *) ft_calloc((send - sstart + 2), sizeof(char));
	if (!str)
		return (NULL);
	sptr = str;
	while (sstart <= send)
		*str++ = *sstart++;
	return (sptr);
}
