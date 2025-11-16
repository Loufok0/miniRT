/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mat2_op2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neon-05 <neon-05@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 23:08:30 by neon-05           #+#    #+#             */
/*   Updated: 2025/10/23 23:08:31 by neon-05          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../matft.h"

t_mat2	mat2_scale(t_mat2 m, double s);
t_mat2	mat2_trans(t_mat2 m);
void	mat2_getlin(t_mat2 m, t_vec2 r[2]);
void	mat2_getcol(t_mat2 m, t_vec2 r[2]);

t_mat2	mat2_scale(t_mat2 m, double s)
{
	return (mat2(
			vec2_scale(m.l1, s),
			vec2_scale(m.l2, s)
		));
}

t_mat2	mat2_trans(t_mat2 m)
{
	t_vec2	row[2];

	mat2_getcol(m, row);
	return (mat2(
			row[0],
			row[1]
		));
}

void	mat2_getrow(t_mat2 m, t_vec2 r[2])
{
	r[0] = m.l1;
	r[1] = m.l2;
}

void	mat2_getcol(t_mat2 m, t_vec2 c[2])
{
	c[0] = vec2(m.l1.x, m.l2.x);
	c[1] = vec2(m.l1.y, m.l2.y);
}
