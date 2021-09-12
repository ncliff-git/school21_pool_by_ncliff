/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainTEST.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncliff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/08 16:10:10 by ncliff            #+#    #+#             */
/*   Updated: 2020/08/09 22:51:50 by ncliff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_for_arg.h"
#include "test_file.h"
#include <stdio.h>

int main(int argc, char **argv)
{
	char *file;
	char *num;
	char **mass;

	mass = NULL;
	file = "numbers.dict.txt";
	num = NULL;
	if (cheak_arg(argc, argv, &file, &num))
	{
		printf("%s\n", file);
		printf("%s\n", num);
		if (cheak_file(file) != NULL)
		{
			mass = mass_f(cheak_file(file), 0, 0, 0);
			printf("%s\n", mass[1]);
			printf("%s\n", mass[2]);
			printf("%s\n", mass[20]);
			printf("%s\n", mass[5]);
		}
		else
			write(2, "Dict Error\n", 11);
	}
	else
		write(2, "Error\n", 6);
	return (0);
}
