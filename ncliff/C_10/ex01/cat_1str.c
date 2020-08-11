/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat_1str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncliff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 17:03:31 by ncliff            #+#    #+#             */
/*   Updated: 2020/08/04 21:44:38 by ncliff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libgen.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <string.h>

void	cat_cat(void)
{
	char	ch[1];

	while (1 == 1)
	{
		read(0, ch, 1);
		write(1, &ch, 1);
	}
}

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

int		cat_test(char **argv, int pnt)
{
	int		fb;
	int		n;
	char	ch;

	if (argv[pnt][0] == '-' && argv[pnt][1] == '\0')
		return (0);
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

int		cat_read(int argc, char **argv)
{
	int		pnt;
	int		i;
	int		n;
	int		fd;
	char	ch[64];

	pnt = 1;
	while (pnt <= argc - 1)
	{
		if (cat_test(argv, pnt))
			break ;
		if (argv[pnt][0] == '-' && argv[pnt][1] == '\0')
			cat_cat();
		fd = open(argv[pnt], 0);
		while ((n = read(fd, ch, 63)) > 0)
		{
			i = 0;
			ch[n] = '\0';
			while (ch[i] != '\0' && i < 64)
				write(1, &ch[i++], 1);
		}
		close(fd);
		pnt++;
	}
	return (0);
}
