/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec2_op2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neon-05 <neon-05@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 23:09:22 by neon-05           #+#    #+#             */
/*   Updated: 2025/10/23 23:09:26 by neon-05          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../matft.h"

t_vec2	vec2_scale(t_vec2 v, double s);
t_vec2	vec2_func(t_vec2 a, double (f)(double));
t_vec2	vec2_lerp(t_vec2 a, t_vec2 b, double t);

t_vec2	vec2_scale(t_vec2 v, double s)
{
	v.x *= s;
	v.y *= s;
	return (v);
}

t_vec2	vec2_func(t_vec2 a, double (f)(double))
{
	t_vec2	r;

	r.x = f(a.x);
	r.y = f(a.y);
	return (r);
}

t_vec2	vec2_lerp(t_vec2 a, t_vec2 b, double t)
{
	return (vec2_add(vec2_scale(a, t), vec2_scale(b, 1. - t)));
}
