/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabussi <ylabussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 17:19:47 by ylabussi          #+#    #+#             */
/*   Updated: 2025/05/14 14:51:37 by ylabussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	split_wc(char const *s, char c)
{
	size_t	i;
	size_t	wc;

	i = 0;
	wc = 0;
	while (s[i])
	{
		wc += (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'));
		i++;
	}
	return (wc);
}

static void	free_all(char **arr, size_t i)
{
	while (i > 0)
	{
		i--;
		free(arr[i]);
	}
	free(arr);
}

static void	split_fill(char **arr, size_t arlen, char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	start;

	i = 0;
	j = 0;
	while (j < arlen)
	{
		while (s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		if (start < i)
		{
			arr[j] = ft_substr(s, start, i - start);
			if (!arr[j])
				return (free_all(arr, j));
		}
		j++;
	}
}

char	**ft_split(char const *s, char c)
{
	size_t	arlen;
	char	**arr;

	if (!s)
		return (NULL);
	arlen = split_wc(s, c);
	arr = ft_calloc(sizeof(char *), arlen + 1);
	if (!arr)
		return (NULL);
	split_fill(arr, arlen, s, c);
	arr[arlen] = NULL;
	return (arr);
}
