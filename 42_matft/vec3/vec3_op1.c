/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec3_op1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neon-05 <neon-05@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 23:09:34 by neon-05           #+#    #+#             */
/*   Updated: 2025/10/23 23:09:35 by neon-05          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../matft.h"

t_vec3	vec3_add(t_vec3 a, t_vec3 b);
t_vec3	vec3_sub(t_vec3 a, t_vec3 b);
t_vec3	vec3_scale(t_vec3 v, double s);
t_vec3	vec3_func(t_vec3 a, double (f)(double));

t_vec3	vec3_add(t_vec3 a, t_vec3 b)
{
	a.x += b.x;
	a.y += b.y;
	a.z += b.z;
	return (a);
}

t_vec3	vec3_sub(t_vec3 a, t_vec3 b)
{
	a.x -= b.x;
	a.y -= b.y;
	a.z -= b.z;
	return (a);
}
