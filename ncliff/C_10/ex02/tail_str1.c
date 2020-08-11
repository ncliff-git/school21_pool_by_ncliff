/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tail_str1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncliff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 13:38:08 by ncliff            #+#    #+#             */
/*   Updated: 2020/08/04 21:38:47 by ncliff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <libgen.h>
#include <errno.h>

void	wrt_cnsl(void)
{
	char ch;

	while (1 == 1)
		read(0, &ch, 1);
}

int		test_arg(int argc, char **argv)
{
	int n;

	n = 0;
	if (argc < 4)
	{
		if (argv[1][0] != '-' && argv[1][1] != 'c')
			return (0);
		while (argv[2][n] != '\0')
		{
			if (argv[2][n] < 48 || argv[2][n] > 57)
				return (2);
			n++;
		}
		wrt_cnsl();
	}
	n = 0;
	if (argv[1][0] != '-' && argv[1][1] != 'c')
		return (0);
	while (argv[2][n] != '\0')
	{
		if (argv[2][n] < 48 || argv[2][n] > 57)
			return (0);
		n++;
	}
	return (5);
}

int		my_strnbr(char **argv)
{
	int n;
	int i;

	n = 0;
	i = 0;
	while (argv[2][i] != '\0')
	{
		n = n * 10 + (argv[2][i] - '0');
		i++;
	}
	return (n);
}

int		len_ch(char **argv, int pnt)
{
	int		fb;
	int		len;
	int		f;
	char	ch[30000];

	len = 0;
	fb = open(argv[pnt], 0);
	while ((f = read(fb, ch, 29999)) > 0)
		len += f;
	close(fb);
	return (len);
}

void	tail(char **argv, int pnt)
{
	int		len;
	int		i;
	int		pzf;
	int		fb;
	char	ch[30000];

	i = 0;
	fb = open(argv[pnt], 0);
	len = len_ch(argv, pnt);
	close(fb);
	fb = open(argv[pnt], 0);
	while ((pnt = read(fb, ch, 29999)) > 0)
	{
		ch[pnt] = 0;
		pzf = 0;
		while (ch[pzf] != '\0')
		{
			if (len - i <= my_strnbr(argv))
				write(1, &ch[pzf], 1);
			pzf++;
			i++;
		}
	}
	close(fb);
}
