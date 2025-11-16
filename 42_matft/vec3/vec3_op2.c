/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec3_op2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neon-05 <neon-05@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 23:09:36 by neon-05           #+#    #+#             */
/*   Updated: 2025/10/23 23:09:37 by neon-05          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../matft.h"

t_vec3	vec3_scale(t_vec3 v, double s);
t_vec3	vec3_func(t_vec3 a, double (f)(double));
t_vec3	vec3_lerp(t_vec3 a, t_vec3 b, double t);
t_vec3	vec3_cross(t_vec3 a, t_vec3 b);

t_vec3	vec3_scale(t_vec3 v, double s)
{
	v.x *= s;
	v.y *= s;
	v.z *= s;
	return (v);
}

t_vec3	vec3_func(t_vec3 a, double (f)(double))
{
	t_vec3	r;

	r.x = f(a.x);
	r.y = f(a.y);
	r.z = f(a.z);
	return (r);
}

t_vec3	vec3_lerp(t_vec3 a, t_vec3 b, double t)
{
	return (vec3_add(vec3_scale(a, t), vec3_scale(b, 1. - t)));
}

t_vec3	vec3_cross(t_vec3 a, t_vec3 b)
{
	t_vec3	r;

	r.x = a.y * b.z - a.z * b.y;
	r.y = a.z * b.x - a.x * b.z;
	r.z = a.x * b.y - a.y * b.x;
	return (r);
}
