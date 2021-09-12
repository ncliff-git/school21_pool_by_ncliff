/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainForRush01.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncliff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/02 13:50:35 by ncliff            #+#    #+#             */
/*   Updated: 2020/08/02 15:37:33 by ncliff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "in_scan.h"

int main(int argc, char **argv)
{
	int i;
	int mass_int[16];

	i = 0;
	if(filling_the_array(argc, argv, mass_int))
	{
		while (i < 16)
		{
			printf("%d ", mass_int[i]);
			i++;
		}
	}
	else
	{
		printf("Error\n");
	}

	return (0);
}
