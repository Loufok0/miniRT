/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabussi <ylabussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 17:58:56 by ylabussi          #+#    #+#             */
/*   Updated: 2024/12/13 18:04:03 by ylabussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
	{
		n *= -1;
		ft_putchar_fd('-', fd);
	}
	if ((unsigned int) n >= 10)
		ft_putnbr_fd((unsigned int )n / 10, fd);
	ft_putchar_fd((unsigned int) n % 10 + '0', fd);
}
