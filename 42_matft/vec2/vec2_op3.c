/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec2_op3.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neon-05 <neon-05@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 23:09:27 by neon-05           #+#    #+#             */
/*   Updated: 2025/10/23 23:09:28 by neon-05          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../matft.h"

double	vec2_length(t_vec2 a);
double	vec2_distance(t_vec2 a, t_vec2 b);
double	vec2_dot(t_vec2 a, t_vec2 b);
t_vec2	vec2_normalize(t_vec2 v);

double	vec2_length(t_vec2 a)
{
	return (sqrt(a.x * a.x + a.y * a.y));
}

double	vec2_distance(t_vec2 a, t_vec2 b)
{
	return (vec2_length(vec2_sub(a, b)));
}

double	vec2_dot(t_vec2 a, t_vec2 b)
{
	return (a.x * b.x + a.y * b.y);
}

t_vec2	vec2_normalize(t_vec2 v)
{
	if (v.x == 0. && v.y == 0.)
		return (v);
	else
		return (vec2_scale(v, 1. / vec2_length(v)));
}
