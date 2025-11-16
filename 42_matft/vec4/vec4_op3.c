/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec4_op3.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neon-05 <neon-05@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 23:09:53 by neon-05           #+#    #+#             */
/*   Updated: 2025/10/23 23:09:54 by neon-05          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../matft.h"

double	vec4_length(t_vec4 a);
double	vec4_distance(t_vec4 a, t_vec4 b);
double	vec4_dot(t_vec4 a, t_vec4 b);
t_vec4	vec4_normalize(t_vec4 v);

double	vec4_length(t_vec4 a)
{
	return (sqrt(a.x * a.x + a.y * a.y + a.z * a.z + a.w * a.w));
}

double	vec4_distance(t_vec4 a, t_vec4 b)
{
	return (vec4_length(vec4_sub(a, b)));
}

double	vec4_dot(t_vec4 a, t_vec4 b)
{
	return (a.x * b.x + a.y * b.y + a.z * b.z + a.w * b.w);
}

t_vec4	vec4_normalize(t_vec4 v)
{
	if (v.x == 0. && v.y == 0.)
		return (v);
	else
		return (vec4_scale(v, 1. / vec4_length(v)));
}
