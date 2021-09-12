/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncliff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/05 10:17:49 by ncliff            #+#    #+#             */
/*   Updated: 2020/08/06 12:35:46 by ncliff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *tabcopy;

	i = 0;
	tabcopy = malloc(sizeof(tab));
	if (tabcopy == NULL)
		return (0);
	while (i < length)
	{
		tabcopy[i] = f(tab[i]);
		i++;
	}
	return (tabcopy);
}
