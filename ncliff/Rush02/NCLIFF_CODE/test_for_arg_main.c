/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_for_arg_main.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncliff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/08 13:39:23 by ncliff            #+#    #+#             */
/*   Updated: 2020/08/09 22:50:35 by ncliff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_for_arg.h"

int		check_for_number(char *ch)
{
	int i;

	i = 0;
	while (ch[i] != '\0')
	{
		if (ch[i] < 48 || ch[i] > 57)
		{
			write(2, "Error\n", 6);
			return (0);
		}
		i++;
	}
	return (1);
}

int		size_arg(char *arg)
{
	int size;

	size = 0;
	while (arg[size] != '\0')
		size++;
	return (size);
}

void	arg_str(char *arg, char **str, int size)
{
	int i;

	i = 0;
	while (i < size)
	{
		(*str)[i] = arg[i];
		i++;
	}
}

int		cheak_arg(int argc, char **argv, char **file_name, char **number)
{
	if (argc < 2 || argc > 3)
		return (0);
	if (argc == 3)
	{
		if (argv[2][0] == '0' && (argv[2][1] >= 48 && argv[2][1] <= 57))
			return (0);
		if (!(check_for_number(argv[2])))
			return (0);
		*number = malloc(sizeof(char) * size_arg(argv[2]));
		*file_name = malloc(sizeof(char) * size_arg(argv[1]));
		arg_str(argv[2], number, size_arg(argv[2]));
		arg_str(argv[1], file_name, size_arg(argv[1]));
	}
	if (argc == 2)
	{
		if (!(check_for_number(argv[1])))
			return (0);
		*number = malloc(sizeof(char) * size_arg(argv[1]));
		arg_str(argv[1], number, size_arg(argv[1]));
	}
	return (1);
}
