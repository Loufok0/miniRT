/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabussi <ylabussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 20:31:00 by ylabussi          #+#    #+#             */
/*   Updated: 2024/12/12 20:35:17 by ylabussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t l)
{
	size_t	i;

	i = 0;
	if (!dst || !src)
		return (0);
	while (dst[i] && i < l)
		i++;
	return (i + ft_strlcpy(dst + i, src, l - i));
}
