/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabussi <ylabussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 17:54:08 by ylabussi          #+#    #+#             */
/*   Updated: 2024/12/12 17:54:08 by ylabussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*p;

	i = 0;
	p = NULL;
	if (!s)
		return (NULL);
	while (s[i])
	{
		if (s[i] == c)
			p = (char *) s + i;
		i++;
	}
	if (s[i] == c)
		p = (char *) s + i;
	return (p);
}
