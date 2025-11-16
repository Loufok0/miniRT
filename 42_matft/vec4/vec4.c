/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec4.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neon-05 <neon-05@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 23:09:57 by neon-05           #+#    #+#             */
/*   Updated: 2025/10/23 23:09:58 by neon-05          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../matft.h"

t_vec4	vec4(double x, double y, double z, double w);
t_vec4	vec3to4(t_vec3 v3, double w);

t_vec4	vec4(double x, double y, double z, double w)
{
	t_vec4	r;

	r.x = x;
	r.y = y;
	r.z = z;
	r.w = w;
	return (r);
}

t_vec4	vec3to4(t_vec3 v3, double w)
{
	return (vec4(v3.x, v3.y, v3.z, w));
}
