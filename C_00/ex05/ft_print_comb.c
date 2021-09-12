/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncliff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/23 10:34:16 by ncliff            #+#    #+#             */
/*   Updated: 2020/07/23 13:26:44 by ncliff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		el_disp(char c1, char c2, char c3)
{
	char sp;
	char com;

	sp = ' ';
	com = ',';
	write(1, &c1, 1);
	write(1, &c2, 1);
	write(1, &c3, 1);
	if (c1 < '7')
	{
		write(1, &com, 1);
		write(1, &sp, 1);
	}
}

int			el_rever(char c1, char c3)
{
	char	r1;
	int		n;

	r1 = '0';
	n = 0;
	while (r1 <= c1)
	{
		if (r1 == c3)
		{
			n++;
		}
		r1++;
	}
	if (n > 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}

int			el_repet(char c1, char c2, char c3)
{
	if (c1 != c2 && c2 != c3 && c1 && c3 != c1 && el_rever(c1, c3) == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

void		ft_print_comb(void)
{
	char numcomb[3];

	numcomb[0] = '0';
	numcomb[1] = '0';
	numcomb[2] = '0';
	while (numcomb[0] <= '9')
	{
		numcomb[1] = numcomb[0] + 1;
		while (numcomb[1] <= '9')
		{
			numcomb[2] = numcomb[1] + 1;
			while (numcomb[2] <= '9')
			{
				if (el_repet(numcomb[0], numcomb[1], numcomb[2]) == 1)
				{
					el_disp(numcomb[0], numcomb[1], numcomb[2]);
				}
				numcomb[2]++;
			}
			numcomb[1]++;
		}
		numcomb[0]++;
	}
}
