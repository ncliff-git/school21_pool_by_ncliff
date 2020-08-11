/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncliff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/30 18:56:51 by ncliff            #+#    #+#             */
/*   Updated: 2020/08/01 12:59:42 by ncliff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int			*mass;
	long int	size;
	long int	n;

	mass = 0;
	size = max - min;
	n = 0;
	if (min >= max)
		return (NULL);
	mass = (int*)malloc(4 * size);
	while (min != max)
	{
		mass[n] = min;
		n++;
		min++;
	}
	return (mass);
}
