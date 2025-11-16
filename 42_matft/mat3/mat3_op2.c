/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mat3_op2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neon-05 <neon-05@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 23:08:41 by neon-05           #+#    #+#             */
/*   Updated: 2025/10/23 23:08:42 by neon-05          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../matft.h"

t_mat3	mat3_scale(t_mat3 m, double s);
t_mat3	mat3_trans(t_mat3 m);
void	mat3_getlin(t_mat3 m, t_vec3 r[3]);
void	mat3_getcol(t_mat3 m, t_vec3 r[3]);

t_mat3	mat3_scale(t_mat3 m, double s)
{
	return (mat3(
			vec3_scale(m.l1, s),
			vec3_scale(m.l2, s),
			vec3_scale(m.l3, s)
		));
}

t_mat3	mat3_trans(t_mat3 m)
{
	t_vec3	row[3];

	mat3_getcol(m, row);
	return (mat3(
			row[0],
			row[1],
			row[2]
		));
}

void	mat3_getrow(t_mat3 m, t_vec3 r[3])
{
	r[0] = m.l1;
	r[1] = m.l2;
	r[2] = m.l3;
}

void	mat3_getcol(t_mat3 m, t_vec3 c[3])
{
	c[0] = vec3(m.l1.x, m.l2.x, m.l3.x);
	c[1] = vec3(m.l1.y, m.l2.y, m.l3.y);
	c[2] = vec3(m.l1.z, m.l2.z, m.l3.z);
}
