/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec3_op3.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neon-05 <neon-05@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 23:09:38 by neon-05           #+#    #+#             */
/*   Updated: 2025/10/23 23:09:39 by neon-05          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../matft.h"

double	vec3_length(t_vec3 a);
double	vec3_distance(t_vec3 a, t_vec3 b);
double	vec3_dot(t_vec3 a, t_vec3 b);
t_vec3	vec3_normalize(t_vec3 v);

double	vec3_length(t_vec3 a)
{
	return (sqrt(a.x * a.x + a.y * a.y + a.z * a.z));
}

double	vec3_distance(t_vec3 a, t_vec3 b)
{
	return (vec3_length(vec3_sub(a, b)));
}

double	vec3_dot(t_vec3 a, t_vec3 b)
{
	return (a.x * b.x + a.y * b.y + a.z * b.z);
}

t_vec3	vec3_normalize(t_vec3 v)
{
	if (v.x == 0. && v.y == 0.)
		return (v);
	else
		return (vec3_scale(v, 1. / vec3_length(v)));
}
