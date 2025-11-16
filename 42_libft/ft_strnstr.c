/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabussi <ylabussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 20:38:09 by ylabussi          #+#    #+#             */
/*   Updated: 2024/12/12 21:05:10 by ylabussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	llen;
	char	*p;

	p = NULL;
	i = 0;
	llen = ft_strlen(little);
	if (!big || !little || len < llen)
		return (NULL);
	while (i + llen < len && ft_strncmp(big + i, little, llen))
		i++;
	if (i < len - llen)
		p = (char *) big + i;
	return (p);
}
