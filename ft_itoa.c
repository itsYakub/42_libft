/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joleksia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 15:16:39 by joleksia          #+#    #+#             */
/*   Updated: 2024/12/07 17:57:33 by joleksia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*fts_strproc(char *s, int n);
static char	*fts_strrev(char *s, size_t len);

char	*ft_itoa(int n)
{
	char	*result;

	result = (char *) malloc((11 + 1) * sizeof(char));
	if (!result)
		return (NULL);
	return (fts_strproc(result, n));
}

static char	*fts_strproc(char *s, int n)
{
	int	i;
	int	neg;

	i = 0;
	if (n == 0)
		s[i++] = '0';
	neg = 0;
	if (n < 0)
	{
		neg = 1;
		n *= -1;
	}
	while (n != 0)
	{
		s[i++] = (n % 10) + '0';
		n /= 10;
	}
	if (neg == 1)
		s[i++] = '-';
	fts_strrev(s, i);
	s[i] = 0;
	return (s);
}

static char	*fts_strrev(char *s, size_t len)
{
	int		i;
	char	tmp;

	i = 0;
	while (i < (int) len / 2)
	{
		tmp = s[len - 1 - i];
		s[len - 1 - i] = s[i];
		s[i] = tmp;
		i++;
	}
	return (s);
}
