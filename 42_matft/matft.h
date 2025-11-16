/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neon-05 <neon-05@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 23:10:09 by neon-05           #+#    #+#             */
/*   Updated: 2025/10/23 23:10:10 by neon-05          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATFT_H
# define MATFT_H

# include <math.h>

// vec2

typedef struct s_vec2
{
	double	x;
	double	y;
}			t_vec2;

t_vec2	vec2(double x, double y);

t_vec2	vec2_add(t_vec2 a, t_vec2 b);
t_vec2	vec2_sub(t_vec2 a, t_vec2 b);
t_vec2	vec2_cwmul(t_vec2 a, t_vec2 b);
t_vec2	vec2_cwdiv(t_vec2 a, t_vec2 b);

t_vec2	vec2_scale(t_vec2 v, double s);
t_vec2	vec2_func(t_vec2 a, double (f)(double));
t_vec2	vec2_lerp(t_vec2 a, t_vec2 b, double t);

double	vec2_length(t_vec2 a);
double	vec2_distance(t_vec2 a, t_vec2 b);
double	vec2_dot(t_vec2 a, t_vec2 b);
t_vec2	vec2_normalize(t_vec2 v);

// vec3

typedef struct s_vec3
{
	double	x;
	double	y;
	double	z;
}			t_vec3;

t_vec3	vec3(double x, double y, double z);
t_vec3	vec2to3(t_vec2 v2, double z);

t_vec3	vec3_add(t_vec3 a, t_vec3 b);
t_vec3	vec3_sub(t_vec3 a, t_vec3 b);
t_vec3	vec3_cwmul(t_vec3 a, t_vec3 b);
t_vec3	vec3_cwdiv(t_vec3 a, t_vec3 b);

t_vec3	vec3_scale(t_vec3 v, double s);
t_vec3	vec3_func(t_vec3 a, double (f)(double));
t_vec3	vec3_lerp(t_vec3 a, t_vec3 b, double t);
t_vec3	vec3_cross(t_vec3 a, t_vec3 b);

double	vec3_length(t_vec3 a);
double	vec3_distance(t_vec3 a, t_vec3 b);
double	vec3_dot(t_vec3 a, t_vec3 b);
t_vec3	vec3_normalize(t_vec3 v);

// vec4

typedef struct s_vec4
{
	double	x;
	double	y;
	double	z;
	double	w;
}			t_vec4;

t_vec4	vec4(double x, double y, double z, double w);
t_vec4	vec3to4(t_vec3 v3, double w);

t_vec4	vec4_add(t_vec4 a, t_vec4 b);
t_vec4	vec4_sub(t_vec4 a, t_vec4 b);
t_vec4	vec4_cwmul(t_vec4 a, t_vec4 b);
t_vec4	vec4_cwdiv(t_vec4 a, t_vec4 b);

t_vec4	vec4_scale(t_vec4 v, double s);
t_vec4	vec4_func(t_vec4 a, double (f)(double));
t_vec4	vec4_lerp(t_vec4 a, t_vec4 b, double t);

double	vec4_length(t_vec4 a);
double	vec4_distance(t_vec4 a, t_vec4 b);
double	vec4_dot(t_vec4 a, t_vec4 b);
t_vec4	vec4_normalize(t_vec4 v);

// mat2

typedef struct s_mat2
{
	t_vec2	l1;
	t_vec2	l2;
}			t_mat2;

t_mat2	mat2(t_vec2 l1, t_vec2 l2);

t_mat2	mat2_add(t_mat2 a, t_mat2 b);
t_mat2	mat2_sub(t_mat2 a, t_mat2 b);
t_mat2	mat2_mul(t_mat2 a, t_mat2 b);
t_vec2	mat2_mul_vec2(t_mat2 m, t_vec2 v);

t_mat2	mat2_scale(t_mat2 m, double s);
t_mat2	mat2_trans(t_mat2 m);
void	mat2_getrow(t_mat2 m, t_vec2 r[2]);
void	mat2_getcol(t_mat2 m, t_vec2 c[2]);

// mat3

typedef struct s_mat3
{
	t_vec3	l1;
	t_vec3	l2;
	t_vec3	l3;
}			t_mat3;

t_mat3	mat3(t_vec3 l1, t_vec3 l2, t_vec3 l3);
t_mat3	mat2to3(t_mat2 m);

t_mat3	mat3_add(t_mat3 a, t_mat3 b);
t_mat3	mat3_sub(t_mat3 a, t_mat3 b);
t_mat3	mat3_mul(t_mat3 a, t_mat3 b);
t_vec3	mat3_mul_vec3(t_mat3 m, t_vec3 v);

t_mat3	mat3_scale(t_mat3 v, double s);
t_mat3	mat3_trans(t_mat3 m);
void	mat3_getrow(t_mat3 m, t_vec3 r[3]);
void	mat3_getcol(t_mat3 m, t_vec3 c[3]);

// mat4

typedef struct s_mat4
{
	t_vec4	l1;
	t_vec4	l2;
	t_vec4	l3;
	t_vec4	l4;
}			t_mat4;

t_mat4	mat4(t_vec4 l1, t_vec4 l2, t_vec4 l3, t_vec4 l4);
t_mat4	mat3to4(t_mat3 m);

t_mat4	mat4_add(t_mat4 a, t_mat4 b);
t_mat4	mat4_sub(t_mat4 a, t_mat4 b);
t_mat4	mat4_mul(t_mat4 a, t_mat4 b);
t_vec4	mat4_mul_vec4(t_mat4 m, t_vec4 v);

t_mat4	mat4_scale(t_mat4 v, double s);
t_mat4	mat4_trans(t_mat4 m);
void	mat4_getrow(t_mat4 m, t_vec4 r[4]);
void	mat4_getcol(t_mat4 m, t_vec4 c[4]);

#endif