/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec4_op1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neon-05 <neon-05@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 23:09:48 by neon-05           #+#    #+#             */
/*   Updated: 2025/10/23 23:09:49 by neon-05          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../matft.h"

t_vec4	vec4_add(t_vec4 a, t_vec4 b);
t_vec4	vec4_sub(t_vec4 a, t_vec4 b);
t_vec4	vec4_cwmul(t_vec4 a, t_vec4 b);
t_vec4	vec4_cwdiv(t_vec4 a, t_vec4 b);

t_vec4	vec4_add(t_vec4 a, t_vec4 b)
{
	a.x += b.x;
	a.y += b.y;
	a.z += b.z;
	a.w += b.w;
	return (a);
}

t_vec4	vec4_sub(t_vec4 a, t_vec4 b)
{
	a.x -= b.x;
	a.y -= b.y;
	a.z -= b.z;
	a.w -= b.w;
	return (a);
}

t_vec4	vec4_cwmul(t_vec4 a, t_vec4 b)
{
	a.x *= b.x;
	a.y *= b.y;
	a.z *= b.z;
	a.w *= b.w;
	return (a);
}

t_vec4	vec4_cwdiv(t_vec4 a, t_vec4 b)
{
	a.x /= b.x;
	a.y /= b.y;
	a.z /= b.z;
	a.w /= b.w;
	return (a);
}
