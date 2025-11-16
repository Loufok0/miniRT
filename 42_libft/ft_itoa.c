/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabussi <ylabussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 18:59:38 by ylabussi          #+#    #+#             */
/*   Updated: 2024/12/13 20:20:57 by ylabussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_digits(unsigned int n)
{
	size_t	digits;
	size_t	m;

	digits = 0;
	m = 1;
	while (n / m)
	{
		digits++;
		m *= 10;
	}
	return (digits + !n);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	digits;
	int		sign;
	size_t	i;

	i = 0;
	sign = (n < 0);
	if (sign)
		n *= -1;
	digits = count_digits(n);
	str = malloc(sign + digits + 1);
	if (sign)
		str[0] = '-';
	str[sign + digits] = '\0';
	while (i < digits)
	{
		str[sign + digits - i - 1] = (unsigned int) n % 10 + '0';
		n /= (unsigned int) 10;
		i++;
	}
	return (str);
}
