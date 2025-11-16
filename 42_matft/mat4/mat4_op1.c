/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mat4_op1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neon-05 <neon-05@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 23:08:50 by neon-05           #+#    #+#             */
/*   Updated: 2025/10/23 23:08:51 by neon-05          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../matft.h"

t_mat4	mat4_add(t_mat4 a, t_mat4 b);
t_mat4	mat4_sub(t_mat4 a, t_mat4 b);
t_mat4	mat4_mul(t_mat4 a, t_mat4 b);
t_vec4	mat4_mul_vec4(t_mat4 m, t_vec4 v);

t_mat4	mat4_add(t_mat4 a, t_mat4 b)
{
	return (mat4(
			vec4_add(a.l1, b.l1),
			vec4_add(a.l2, b.l2),
			vec4_add(a.l3, b.l3),
			vec4_add(a.l4, b.l4)
		));
}

t_mat4	mat4_sub(t_mat4 a, t_mat4 b)
{
	return (mat4(
			vec4_sub(a.l1, b.l1),
			vec4_sub(a.l2, b.l2),
			vec4_sub(a.l3, b.l3),
			vec4_sub(a.l4, b.l4)
		));
}

t_mat4	mat4_mul(t_mat4 a, t_mat4 b)
{
	t_vec4	row[4];
	t_vec4	col[4];

	mat4_getrow(a, row);
	mat4_getcol(b, col);
	return (mat4(
			vec4(vec4_dot(row[0], col[0]), vec4_dot(row[0], col[1]),
				vec4_dot(row[0], col[2]), vec4_dot(row[0], col[3])),
			vec4(vec4_dot(row[1], col[0]), vec4_dot(row[1], col[1]),
				vec4_dot(row[1], col[2]), vec4_dot(row[1], col[3])),
			vec4(vec4_dot(row[2], col[0]), vec4_dot(row[2], col[1]),
				vec4_dot(row[2], col[2]), vec4_dot(row[2], col[3])),
			vec4(vec4_dot(row[3], col[0]), vec4_dot(row[3], col[1]),
				vec4_dot(row[3], col[2]), vec4_dot(row[3], col[3]))
		));
}

t_vec4	mat4_mul_vec4(t_mat4 m, t_vec4 v)
{
	t_vec4	col[4];

	mat4_getcol(m, col);
	return (vec4(
			vec4_dot(col[0], v),
			vec4_dot(col[1], v),
			vec4_dot(col[2], v),
			vec4_dot(col[3], v)
		));
}
