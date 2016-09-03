/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   saturate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburroug <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/02 11:46:03 by aburroug          #+#    #+#             */
/*   Updated: 2016/09/02 11:47:43 by aburroug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rtv1.h"

float	saturate(float n)
{
	return (clamp(n, 0.0, 1.0));
}