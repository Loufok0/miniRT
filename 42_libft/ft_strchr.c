/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabussi <ylabussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 17:53:33 by ylabussi          #+#    #+#             */
/*   Updated: 2024/12/12 17:53:33 by ylabussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	*p;

	i = 0;
	p = NULL;
	if (!s)
		return (NULL);
	while (s[i] && s[i] != c)
		i++;
	if (s[i] == c)
		p = (char *) s + i;
	return (p);
}
