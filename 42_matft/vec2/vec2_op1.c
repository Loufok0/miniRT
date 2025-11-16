/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec2_op1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neon-05 <neon-05@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 23:09:17 by neon-05           #+#    #+#             */
/*   Updated: 2025/10/23 23:09:18 by neon-05          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../matft.h"

t_vec2	vec2_add(t_vec2 a, t_vec2 b);
t_vec2	vec2_sub(t_vec2 a, t_vec2 b);
t_vec2	vec2_cwmul(t_vec2 a, t_vec2 b);
t_vec2	vec2_cwdiv(t_vec2 a, t_vec2 b);

t_vec2	vec2_add(t_vec2 a, t_vec2 b)
{
	a.x += b.x;
	a.y += b.y;
	return (a);
}

t_vec2	vec2_sub(t_vec2 a, t_vec2 b)
{
	a.x -= b.x;
	a.y -= b.y;
	return (a);
}

t_vec2	vec2_cwmul(t_vec2 a, t_vec2 b)
{
	a.x *= b.x;
	a.y *= b.y;
	return (a);
}

t_vec2	vec2_cwdiv(t_vec2 a, t_vec2 b)
{
	a.x /= b.x;
	a.y /= b.y;
	return (a);
}
