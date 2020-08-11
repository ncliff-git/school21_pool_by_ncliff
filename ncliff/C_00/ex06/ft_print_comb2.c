/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncliff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/23 14:30:32 by ncliff            #+#    #+#             */
/*   Updated: 2020/07/23 16:57:44 by ncliff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		per_disp(int n1)
{
	char	c1;
	char	c2;
	int		h1;

	h1 = n1 / 10;
	c1 = '0' + h1;
	c2 = '0' + (n1 % 10);
	write(1, &c1, 1);
	write(1, &c2, 1);
}

void		disp_line(int n1, int n2)
{
	char	sp;
	char	zp;

	sp = ' ';
	zp = ',';
	per_disp(n1);
	write(1, &sp, 1);
	per_disp(n2);
	if (n1 < 98)
	{
		write(1, &zp, 1);
		write(1, &sp, 1);
	}
}

void		ft_print_comb2(void)
{
	int		n1;
	int		n2;

	n1 = 0;
	n2 = 1;
	while (n1 <= 98)
	{
		n2 += n1;
		while (n2 <= 99)
		{
			disp_line(n1, n2);
			n2++;
		}
		n1++;
		n2 = 1;
	}
}

int main ()
{
	ft_print_comb2();
}
