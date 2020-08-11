/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncliff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/30 15:50:20 by ncliff            #+#    #+#             */
/*   Updated: 2020/07/30 17:00:24 by ncliff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		my_strcmp(char *s1, char *s2)
{
	int i;
	int n;

	i = 0;
	n = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] - s2[i] != 0)
		{
			n = s1[i] - s2[i];
			break ;
		}
		i++;
	}
	return (n);
}

void	write_argv(int argc, char **argv)
{
	int i;
	int n;

	n = 1;
	while (n < argc)
	{
		i = 0;
		while (argv[n][i])
		{
			write(1, &argv[n][i], 1);
			i++;
		}
		n++;
		write(1, "\n", 1);
	}
}

int		main(int argc, char *argv[])
{
	int		i;
	int		n;
	char	*swap;

	i = 1;
	n = 1;
	while (i < argc)
	{
		while (n < argc - 1)
		{
			if (my_strcmp(argv[n], argv[n + 1]) > 0)
			{
				swap = argv[n];
				argv[n] = argv[n + 1];
				argv[n + 1] = swap;
			}
			n++;
		}
		n = 1;
		i++;
	}
	write_argv(argc, argv);
}
