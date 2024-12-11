/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joleksia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 13:48:54 by joleksia          #+#    #+#             */
/*   Updated: 2024/12/08 15:43:26 by joleksia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*arr;

	if (size && ((nmemb * size) / size) != nmemb)
		return (NULL);
	arr = malloc(nmemb * size);
	if (!arr)
		return (NULL);
	arr = ft_bzero(arr, nmemb * size);
	return (arr);
}
