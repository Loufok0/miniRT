/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mat4.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neon-05 <neon-05@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 23:08:56 by neon-05           #+#    #+#             */
/*   Updated: 2025/10/23 23:08:57 by neon-05          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../matft.h"

t_mat4	mat4(t_vec4 l1, t_vec4 l2, t_vec4 l3, t_vec4 l4);
t_mat4	mat3to4(t_mat3 m);

t_mat4	mat4(t_vec4 l1, t_vec4 l2, t_vec4 l3, t_vec4 l4)
{
	t_mat4	r;

	r.l1 = l1;
	r.l2 = l2;
	r.l3 = l3;
	r.l4 = l4;
	return (r);
}

t_mat4	mat3to4(t_mat3 m)
{
	return (mat4(
			vec3to4(m.l1, 0.),
			vec3to4(m.l2, 0.),
			vec3to4(m.l3, 0.),
			vec4(0., 0., 0., 1.)
		));
}
