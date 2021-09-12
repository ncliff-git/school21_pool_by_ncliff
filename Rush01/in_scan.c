/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   in_scan.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncliff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/02 13:49:14 by ncliff            #+#    #+#             */
/*   Updated: 2020/08/02 15:40:32 by ncliff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "in_scan.h"

int		correct_input(int argc, char **argv, int *mass_int)
{
	int pnt;

	pnt = 0;
	if (argc > 2 || argc == 1)
		return (0);
	while (argv[1][pnt] != '\0')
	{
		if (!((argv[1][pnt] >= 49 && argv[1][pnt] <= 52) || argv[1][pnt] == 32))
			return (0);
		pnt++;
	}
	return (1);
}

int		filling_the_array(int argc, char **argv, int *mass_int)
{
	int i;
	int n;

	i = 0;
	n = 0;
	if (correct_input(argc, argv, mass_int))
	{
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] >= 49 && argv[1][i] <= 52)
			{
				mass_int[n] = argv[1][i] - '0';
				n++;
			}
			i++;
		}
		if (n != 16)
			return (0);
		return (1);
	}
	else
		return (0);
	return (0);
}
