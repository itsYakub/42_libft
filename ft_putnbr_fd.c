/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joleksia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 15:13:09 by joleksia          #+#    #+#             */
/*   Updated: 2024/12/07 15:24:45 by joleksia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_number_length(int nb)
{
	int	result;

	result = 0;
	while (nb != 0)
	{
		result++;
		nb /= 10;
	}
	return (result);
}

void	ft_putnbr_fd(int n, int fd)
{
	char	result[10];

	if (n == 0)
		write(1, "0", 1);
	else
	{
		if (n < 0)
		{
			if (n == -2147483648)
			{
				write(1, "-2147483648", 11);
				return ;
			}
			write(1, "-", 1);
			n *= -1;
		}
		result[ft_number_length(n)] = '\0';
		while (ft_number_length(n))
		{
			result[ft_number_length(n) - 1] = n % 10 + '0';
			n /= 10;
		}
		write(fd, result, ft_strlen(result));
	}
}
