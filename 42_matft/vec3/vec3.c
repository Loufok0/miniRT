/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec3.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neon-05 <neon-05@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 23:09:42 by neon-05           #+#    #+#             */
/*   Updated: 2025/10/23 23:09:43 by neon-05          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../matft.h"

t_vec3	vec3(double x, double y, double z);
t_vec3	vec2to3(t_vec2 v2, double z);

t_vec3	vec3(double x, double y, double z)
{
	t_vec3	r;

	r.x = x;
	r.y = y;
	r.z = z;
	return (r);
}

t_vec3	vec2to3(t_vec2 v2, double z)
{
	return (vec3(v2.x, v2.y, z));
}
