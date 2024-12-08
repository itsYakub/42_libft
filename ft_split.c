/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joleksia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 08:50:36 by joleksia          #+#    #+#             */
/*   Updated: 2024/12/08 11:31:30 by joleksia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*fts_strndup(const char *s, size_t n);
static void	*fts_realloc(void *ptr, size_t s);
static char	**fts_strproc(char **ptr, const char *s, char c, int i);

char	**ft_split(char const *s, char c)
{
	char	**warr;

	warr = (char **) malloc(sizeof(char *));
	if (!warr)
		return (NULL);
	return (fts_strproc(warr, s, c, 0));
}

static char	*fts_strndup(const char *s, size_t n)
{
	char	*result;
	int		i;

	result = (char *) ft_calloc(n + 1, sizeof(char));
	if (!result)
		return (NULL);
	i = -1;
	while (++i < (int) n)
		result[i] = s[i];
	return (result);
}

static void	*fts_realloc(void *ptr, size_t s)
{
	void	*res;	

	res = malloc(s);
	if (!res)
		return (NULL);
	ft_memmove(res, ptr, s);
	free(ptr);
	return (res);
}

static char	**fts_strproc(char **ptr, const char *s, char c, int i)
{
	char	*wstart;
	char	*wend;

	wstart = (char *) s;
	while (*wstart == c)
		wstart++;
	wend = wstart;
	while (*wend != c)
		wend++;
	i = 0;
	while (*wstart)
	{
		ptr[i++] = fts_strndup(wstart, wend - wstart);
		ptr = (char **) fts_realloc(ptr, (i + 1) * sizeof(char *));
		if (!ptr)
			return (NULL);
		wstart = wend;
		while (*wstart == c)
			wstart++;
		wend = wstart;
		while (*wend && *wend != c)
			wend++;
	}
	ptr[i] = NULL;
	return (ptr);
}
