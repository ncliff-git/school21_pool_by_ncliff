/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncliff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/01 15:22:02 by ncliff            #+#    #+#             */
/*   Updated: 2020/08/01 21:19:21 by ncliff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int					ft_strlen(char *str)
{
	int num;

	num = 0;
	while (str[num] != '\0')
	{
		num++;
	}
	return (num);
}

char				*ft_strdup(char *src)
{
	int		n;
	char	*tab;

	n = 0;
	while (src[n] != '\0')
	{
		n++;
	}
	tab = malloc(n);
	n = 0;
	while (src[n] != '\0')
	{
		tab[n] = src[n];
		n++;
	}
	tab[n] = src[n];
	return (tab);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*point;
	int			i;
	int			n;

	i = 0;
	point = malloc(sizeof(t_stock_str) * (ac + 1));
	if (point == NULL)
		return (NULL);
	while (i != ac)
	{
		point[i].size = ft_strlen(av[i]);
		point[i].str = ft_strdup(av[i]);
		point[i].copy = ft_strdup(point[i].str);
		i++;
	}
	point[i].size = 0;
	point[i].str = 0;
	point[i].copy = 0;
	free(point);
	return (point);
}
