/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   threads.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reyvan-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/01 12:04:11 by reyvan-d          #+#    #+#             */
/*   Updated: 2016/09/03 18:44:29 by reyvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rtv1.h"

void	*thread1(void *e)
{
	t_vect 	ray;
	t_env  	*env;
	t_env  	*env2;
	t_tvar 	var;

	env2 = (t_env *)e;
	env = (t_env *)malloc(sizeof(t_env));
	ft_memcpy(env, env2, sizeof(t_env));
	env->spots = (t_spot *)malloc(sizeof(t_spot) * (env->t.s1 + 1));
	ft_memcpy(env->spots, env2->spots, sizeof(t_spot) * (env->t.s2 + 1));
	env->screen = (t_obj *)malloc(sizeof(t_obj));
	ft_memcpy(env->screen, env2->screen, sizeof(t_obj));
//	set_to(&(env->screen->pos), &(env->dir));
//	add(&(env->screen->pos), &(env->pos));
//	set_to(&(env->screen->dir), &(env->dir));
	var.y = -1;
	var.b = WIN_WIDTH >> 2;
	while (++var.y < env->img->height)
	{
		var.x = -1;
		while (++var.x <= var.b)
		{
			create_ray(env, &ray, var.x, var.y);
			cast_ray(env, &ray, var.x, var.y);
		}
	}
	free(env->screen);
	free(env->spots);
	free(env);
	return (0);
}

void	*thread2(void *e)
{
	t_vect 	ray;
	t_env  	*env;
	t_env  	*env2;
	t_tvar 	var;

	env2 = (t_env *)e;
	env = (t_env *)malloc(sizeof(t_env));
	ft_memcpy(env, env2, sizeof(t_env));
	env->spots = (t_spot *)malloc(sizeof(t_spot) * (env->t.s1 + 1));
	ft_memcpy(env->spots, env2->spots, sizeof(t_spot) * (env->t.s2 + 1));
	env->screen = (t_obj *)malloc(sizeof(t_obj));
	ft_memcpy(env->screen, env2->screen, sizeof(t_obj));
	set_to(&(env->screen->pos), &(env->dir));
	add(&(env->screen->pos), &(env->pos));
	set_to(&(env->screen->dir), &(env->dir));
	var.y = -1;
	var.b = WIN_WIDTH >> 1;
	while (++var.y < env->img->height)
	{
		var.x = WIN_WIDTH >> 2;
		while (++var.x <= var.b)
		{
			create_ray(env, &ray, var.x, var.y);
			cast_ray(env, &ray, var.x, var.y);
		}
	}
	free(env->screen);
	free(env->spots);
	free(env);
	return (0);
}

void	*thread3(void *e)
{
	t_vect 	ray;
	t_env  	*env;
	t_env  	*env2;
	t_tvar 	var;

	env2 = (t_env *)e;
	env = (t_env *)malloc(sizeof(t_env));
	ft_memcpy(env, env2, sizeof(t_env));
	env->spots = (t_spot *)malloc(sizeof(t_spot) * (env->t.s1 + 1));
	ft_memcpy(env->spots, env2->spots, sizeof(t_spot) * (env->t.s2 + 1));
	env->screen = (t_obj *)malloc(sizeof(t_obj));
	ft_memcpy(env->screen, env2->screen, sizeof(t_obj));
	set_to(&(env->screen->pos), &(env->dir));
	add(&(env->screen->pos), &(env->pos));
	set_to(&(env->screen->dir), &(env->dir));
	var.y = -1;
	var.b = (WIN_WIDTH >> 1) + (WIN_WIDTH >> 2);
	while (++var.y < env->img->height)
	{
		var.x = WIN_WIDTH >> 2;
		while (++var.x <= var.b)
		{
			create_ray(env, &ray, var.x, var.y);
			cast_ray(env, &ray, var.x, var.y);
		}
	}
	free(env->screen);
	free(env->spots);
	free(env);
	return (0);

}

void	*thread4(void *e)
{
	t_vect 	ray;
	t_env  	*env;
	t_env  	*env2;
	t_tvar 	var;

	env2 = (t_env *)e;
	env = (t_env *)malloc(sizeof(t_env));
	ft_memcpy(env, env2, sizeof(t_env));
	env->spots = (t_spot *)malloc(sizeof(t_spot) * (env->t.s1 + 1));
	ft_memcpy(env->spots, env2->spots, sizeof(t_spot) * (env->t.s2 + 1));
	env->screen = (t_obj *)malloc(sizeof(t_obj));
	ft_memcpy(env->screen, env2->screen, sizeof(t_obj));
	set_to(&(env->screen->pos), &(env->dir));
	add(&(env->screen->pos), &(env->pos));
	set_to(&(env->screen->dir), &(env->dir));
	var.y = -1;
	var.b = WIN_WIDTH;
	while (++var.y < env->img->height)
	{
		var.x = (WIN_WIDTH >> 2) + (WIN_WIDTH >> 1);
		while (++var.x <= var.b)
		{
			create_ray(env, &ray, var.x, var.y);
			cast_ray(env, &ray, var.x, var.y);
		}
	}
	free(env->screen);
	free(env->spots);
	free(env);
	return (0);
}
