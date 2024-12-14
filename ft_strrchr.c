/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joleksia <joleksia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 11:24:03 by joleksia          #+#    #+#             */
/*   Updated: 2024/12/14 10:09:50 by joleksia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*scpy;

	if (!s)
		return (NULL);
	scpy = (char *) s + ft_strlen(s);
	while (scpy >= s)
	{
		if (*scpy == (char) c)
			return (scpy);
		scpy--;
	}
	return (NULL);
}
