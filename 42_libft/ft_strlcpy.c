/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabussi <ylabussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 19:25:29 by ylabussi          #+#    #+#             */
/*   Updated: 2024/12/12 20:30:03 by ylabussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t l)
{
	size_t	i;

	i = 0;
	if (!dst || !src)
		return (0);
	while (src[i] && i + 1 < l)
	{
		dst[i] = src[i];
		i++;
	}
	if (l > 0)
		dst[i] = '\0';
	while (src[i])
		i++;
	return (i);
}
