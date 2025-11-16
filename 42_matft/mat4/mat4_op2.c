/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mat4_op2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neon-05 <neon-05@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 23:08:53 by neon-05           #+#    #+#             */
/*   Updated: 2025/10/23 23:08:54 by neon-05          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../matft.h"

t_mat4	mat4_scale(t_mat4 m, double s);
t_mat4	mat4_trans(t_mat4 m);
void	mat4_getlin(t_mat4 m, t_vec4 r[4]);
void	mat4_getcol(t_mat4 m, t_vec4 r[4]);

t_mat4	mat4_scale(t_mat4 m, double s)
{
	return (mat4(
			vec4_scale(m.l1, s),
			vec4_scale(m.l2, s),
			vec4_scale(m.l3, s),
			vec4_scale(m.l4, s)
		));
}

t_mat4	mat4_trans(t_mat4 m)
{
	t_vec4	row[4];

	mat4_getcol(m, row);
	return (mat4(
			row[0],
			row[1],
			row[2],
			row[3]
		));
}

void	mat4_getrow(t_mat4 m, t_vec4 r[4])
{
	r[0] = m.l1;
	r[1] = m.l2;
	r[2] = m.l3;
	r[3] = m.l4;
}

void	mat4_getcol(t_mat4 m, t_vec4 c[4])
{
	c[0] = vec4(m.l1.x, m.l2.x, m.l3.x, m.l4.x);
	c[1] = vec4(m.l1.y, m.l2.y, m.l3.y, m.l4.y);
	c[2] = vec4(m.l1.z, m.l2.z, m.l3.z, m.l4.z);
	c[3] = vec4(m.l1.w, m.l2.w, m.l3.w, m.l4.w);
}
