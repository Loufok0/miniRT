/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec4_op2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neon-05 <neon-05@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 23:09:50 by neon-05           #+#    #+#             */
/*   Updated: 2025/10/23 23:09:51 by neon-05          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../matft.h"

t_vec4	vec4_scale(t_vec4 v, double s);
t_vec4	vec4_func(t_vec4 a, double (f)(double));
t_vec4	vec4_lerp(t_vec4 a, t_vec4 b, double t);

t_vec4	vec4_scale(t_vec4 v, double s)
{
	v.x *= s;
	v.y *= s;
	v.z *= s;
	v.w *= s;
	return (v);
}

t_vec4	vec4_func(t_vec4 a, double (f)(double))
{
	t_vec4	r;

	r.x = f(a.x);
	r.y = f(a.y);
	r.z = f(a.z);
	r.w = f(a.w);
	return (r);
}

t_vec4	vec4_lerp(t_vec4 a, t_vec4 b, double t)
{
	return (vec4_add(vec4_scale(a, t), vec4_scale(b, 1. - t)));
}
