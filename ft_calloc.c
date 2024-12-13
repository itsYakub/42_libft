/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joleksia <joleksia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 13:48:54 by joleksia          #+#    #+#             */
/*   Updated: 2024/12/13 08:57:10 by joleksia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*arr;

	if (size && ((nmemb * size) / size) != nmemb)
		return (malloc(0));
	arr = malloc(nmemb * size);
	if (!arr)
		return (NULL);
	arr = ft_bzero(arr, nmemb * size);
	return (arr);
}
