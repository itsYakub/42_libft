/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joleksia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 09:11:36 by joleksia          #+#    #+#             */
/*   Updated: 2024/12/08 13:12:44 by joleksia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *ptr, size_t n)
{
	unsigned char	*p;
	int				i;

	i = 0;
	p = (unsigned char *) ptr;
	while (p && n--)
		*p++ = 0;
	return (ptr);
}
