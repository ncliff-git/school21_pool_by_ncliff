/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algoritm.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cobara <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 14:30:26 by cobara            #+#    #+#             */
/*   Updated: 2020/08/12 20:58:01 by cobara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/algoritm.h"
#include "../includes/matrix.h"

void	terminal_input(void)
{
	char	buffer[65000];
	int		size;
	int		j;

	size = 0;
	while ((j = read(0, buffer + size, 65000)))
		size += j;
	if ((g_line = is_valid_arg(buffer, &g_s1, &g_s2, &g_s3)) < 0)
	{
		ft_putstr("map error\n");
		return ;
	}
	buffer[size] = '\0';
	if (test_console_input(buffer) == 0)
	{
		ft_putstr("map error\n");
		return ;
	}
	set_index();
	set_symb();
	print();
	clean_matrix();
}

int		test_console_input(char *str)
{
	if ((len_test(str, g_line)) < 0)
		return (0);
	if (mass_test(str, g_s1, g_s2) == 0)
		return (0);
	mass_f(str, g_s1, g_s2);
	if (g_matrix == NULL)
		return (0);
	return (1);
}

void	ft_putstr(char *c)
{
	int i;

	i = 0;
	while (c[i] != '\0')
	{
		write(1, &c[i], 1);
		i++;
	}
}

void	file_work(int argc, char **argv)
{
	int i;

	i = 1;
	while (i < argc)
	{
		g_line = is_valid_arg(cheak_file(argv[i]), &g_s1, &g_s2, &g_s3);
		g_column = 0;
		if (test(argv[i], g_s1, g_s2) == 0 || g_line == -1)
		{
			ft_putstr("map error\n");
			if (argc > 2 && i != argc - 1)
				write(1, "\n", 1);
			i++;
			continue;
		}
		set_index();
		set_symb();
		print();
		if (argc > 2 && i != argc - 1)
			write(1, "\n", 1);
		clean_matrix();
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc > 1)
		file_work(argc, argv);
	else
		terminal_input();
}
