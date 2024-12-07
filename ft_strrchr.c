/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joleksia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 11:24:03 by joleksia          #+#    #+#             */
/*   Updated: 2024/12/07 11:39:42 by joleksia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*scpy;

	scpy = (char *) s + ft_strlen(s);
	while (scpy != s)
	{
		if (*scpy == c)
			return (scpy);
		scpy--;
	}
	return (NULL);
}