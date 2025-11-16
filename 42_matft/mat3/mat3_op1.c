/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mat3_op1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neon-05 <neon-05@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 23:08:38 by neon-05           #+#    #+#             */
/*   Updated: 2025/10/23 23:08:39 by neon-05          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../matft.h"

t_mat3	mat3_add(t_mat3 a, t_mat3 b);
t_mat3	mat3_sub(t_mat3 a, t_mat3 b);
t_mat3	mat3_mul(t_mat3 a, t_mat3 b);
t_vec3	mat3_mul_vec3(t_mat3 m, t_vec3 v);

t_mat3	mat3_add(t_mat3 a, t_mat3 b)
{
	return (mat3(
			vec3_add(a.l1, b.l1),
			vec3_add(a.l2, b.l2),
			vec3_add(a.l3, b.l3)
		));
}

t_mat3	mat3_sub(t_mat3 a, t_mat3 b)
{
	return (mat3(
			vec3_sub(a.l1, b.l1),
			vec3_sub(a.l2, b.l2),
			vec3_sub(a.l3, b.l3)
		));
}

t_mat3	mat3_mul(t_mat3 a, t_mat3 b)
{
	t_vec3	row[3];
	t_vec3	col[3];

	mat3_getrow(a, row);
	mat3_getcol(b, col);
	return (mat3(
			vec3(vec3_dot(row[0], col[0]), vec3_dot(row[0], col[1]),
				vec3_dot(row[0], col[2])),
			vec3(vec3_dot(row[1], col[0]), vec3_dot(row[1], col[1]),
				vec3_dot(row[1], col[2])),
			vec3(vec3_dot(row[2], col[0]), vec3_dot(row[2], col[1]),
				vec3_dot(row[2], col[2]))
		));
}

t_vec3	mat3_mul_vec3(t_mat3 m, t_vec3 v)
{
	t_vec3	col[3];

	mat3_getcol(m, col);
	return (vec3(
			vec3_dot(col[0], v),
			vec3_dot(col[1], v),
			vec3_dot(col[2], v)
		));
}
