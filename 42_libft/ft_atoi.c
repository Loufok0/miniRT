/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabussi <ylabussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 21:28:28 by ylabussi          #+#    #+#             */
/*   Updated: 2025/05/14 14:42:27 by ylabussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *s)
{
	int		n;
	int		sign;
	size_t	i;

	i = 0;
	n = 0;
	sign = 1;
	if (!s)
		return (0);
	while (s[i] == ' ' || ('\t' <= s[i] && s[i] <= '\r'))
		i++;
	if (s[i] == '+')
		i++;
	else if (s[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (ft_isdigit(s[i]))
	{
		n = n * 10 + s[i] - '0';
		i++;
	}
	return (sign * n);
}
