/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tablen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburroug <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/03 09:57:40 by aburroug          #+#    #+#             */
/*   Updated: 2016/09/03 10:05:02 by aburroug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rtv1.h"

size_t	ft_tablen(void **tab)
{
	 int	len;

	 len = 0;
	 while (tab[len])
		 len++;
	 return (len);
}
