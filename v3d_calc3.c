/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   v3d_calc3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelangh <edelangh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/11 15:33:02 by edelangh          #+#    #+#             */
/*   Updated: 2015/02/14 14:45:04 by edelangh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rtv1.h"

t_vect	*clamp_vec(t_vect *v1, float min, float max)
{
	v1->x = clamp(v1->x, min, max);
	v1->y = clamp(v1->y, min, max);
	v1->z = clamp(v1->z, min, max);
	return (v1);
}

float	clamp(float n, float min2, float max2)
{
	if (n > max2)
	{
		if (min2 > max2)
			return (min2);
		else
			return (max2);
	}
	else
	{
		if (min2 > n)
			return (min2);
		else
			return (n);
	}
}

t_vect	*turn_orthogonal(t_vect *v1)
{
	float inverse;
	float old_x;

	inverse = 1.0 / sqrt(v1->x * v1->x + v1->z * v1->z);
	old_x = v1->x;
	v1->x = -inverse * v1->z;
	v1->z = inverse * old_x;
	return (v1);
}

t_vect	*cross_product(t_vect *v1, t_vect *v2)
{
	float	old_x;
	float	old_y;

	old_x = v1->x;
	old_y = v1->y;
	v1->x = v2->y * v1->z - v2->z * old_y;
	v1->y = v2->z * old_x - v2->x * v1->z;
	v1->z = v2->x * old_y - v2->y * old_x;
	return (v1);
}

t_vect	*scalar_multiply(t_vect *a, float amount)
{
	a->x *= amount;
	a->y *= amount;
	a->z *= amount;
	return (a);
}
