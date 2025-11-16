/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabussi <ylabussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 18:13:39 by ylabussi          #+#    #+#             */
/*   Updated: 2025/05/14 14:57:32 by ylabussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	start;
	size_t	end;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	start = i;
	end = i;
	while (s1[i])
	{
		if (!ft_strchr(set, s1[i]))
			end = i + 1;
		i++;
	}
	return (ft_substr(s1, start, end - start));
}
