/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mat2_op1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neon-05 <neon-05@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 23:08:21 by neon-05           #+#    #+#             */
/*   Updated: 2025/10/23 23:08:22 by neon-05          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../matft.h"

t_mat2	mat2_add(t_mat2 a, t_mat2 b);
t_mat2	mat2_sub(t_mat2 a, t_mat2 b);
t_mat2	mat2_mul(t_mat2 a, t_mat2 b);
t_vec2	mat2_mul_vec2(t_mat2 m, t_vec2 v);

t_mat2	mat2_add(t_mat2 a, t_mat2 b)
{
	return (mat2(
			vec2_add(a.l1, b.l1),
			vec2_add(a.l2, b.l2)
		));
}

t_mat2	mat2_sub(t_mat2 a, t_mat2 b)
{
	return (mat2(
			vec2_sub(a.l1, b.l1),
			vec2_sub(a.l2, b.l2)
		));
}

t_mat2	mat2_mul(t_mat2 a, t_mat2 b)
{
	t_vec2	row[2];
	t_vec2	col[2];

	mat2_getrow(a, row);
	mat2_getcol(b, col);
	return (mat2(
			vec2(vec2_dot(row[0], col[0]), vec2_dot(row[0], col[1])),
			vec2(vec2_dot(row[1], col[0]), vec2_dot(row[1], col[1]))
		));
}

t_vec2	mat2_mul_vec2(t_mat2 m, t_vec2 v)
{
	t_vec2	col[2];

	mat2_getcol(m, col);
	return (vec2(
			vec2_dot(col[0], v),
			vec2_dot(col[1], v)
		));
}
