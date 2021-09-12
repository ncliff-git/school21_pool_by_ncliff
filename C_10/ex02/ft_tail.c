/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncliff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 11:54:44 by ncliff            #+#    #+#             */
/*   Updated: 2020/08/04 21:39:34 by ncliff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <libgen.h>
#include <errno.h>

void	tail(char **argv, int nbr);
int		test_arg(int argc, char **argv);

void	errno_out(char *ch, char **argv, int pnt)
{
	int		i;
	char	*name;

	i = 0;
	name = basename(argv[0]);
	while (name[i] != '\0')
		write(2, &name[i++], 1);
	write(2, ": ", 2);
	i = 0;
	while (argv[pnt][i] != '\0')
		write(2, &argv[pnt][i++], 1);
	write(2, ": ", 2);
	i = 0;
	while (ch[i] != '\0')
		write(2, &ch[i++], 1);
	write(2, "\n", 1);
}

int		tail_test(char **argv, int pnt)
{
	int		fb;
	int		n;
	char	ch;

	fb = open(argv[pnt], 0);
	if (fb == -1)
	{
		errno_out(strerror(errno), argv, pnt);
		return (1);
	}
	n = read(fb, &ch, 1);
	if (n == -1)
	{
		errno_out(strerror(errno), argv, pnt);
		return (1);
	}
	close(fb);
	return (0);
}

void	illegal_offset(char **argv)
{
	int		i;
	char	*name;

	i = 0;
	name = basename(argv[0]);
	while (name[i] != '\0')
		write(2, &name[i++], 1);
	write(2, ": ", 2);
	i = 0;
	write(2, "illegal offset -- ", 18);
	while (argv[2][i] != '\0')
		write(2, &argv[2][i++], 1);
	write(2, "\n", 1);
}

int		main(int argc, char **argv)
{
	int err;
	int i;

	i = 3;
	if (argc < 3)
		return (0);
	err = test_arg(argc, argv);
	if (err == 2)
	{
		illegal_offset(argv);
		return (0);
	}
	if (err == 5)
	{
		while (argc > i)
		{
			if (tail_test(argv, i))
				return (0);
			tail(argv, i);
			i++;
		}
	}
}
