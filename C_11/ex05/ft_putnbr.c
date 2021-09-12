/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncliff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/27 10:12:47 by ncliff            #+#    #+#             */
/*   Updated: 2020/08/05 21:15:18 by ncliff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "my_math.h"

int			sum_piob(int nb)
{
	char		min;

	min = '-';
	if (nb < 0)
	{
		write(1, &min, 1);
		nb *= (-1);
	}
	return (nb);
}

int			sum_int(int nbcopy)
{
	int sum;

	sum = 0;
	if (nbcopy == 0)
		return (1);
	while (nbcopy != 0)
	{
		nbcopy /= 10;
		sum++;
	}
	return (sum);
}

int			sqr(int sum)
{
	int sq;

	if (sum == 10)
		return (1000000000);
	sq = 1;
	while (sum != 0)
	{
		sq = sq * 10;
		sum--;
	}
	sq = sq / 10;
	return (sq);
}

void		ft_putnbr(int nb)
{
	char		c1;
	int			maxz;
	int			sum;
	int			sq;

	sum = 0;
	maxz = -2147483648;
	if (maxz != nb)
	{
		nb = sum_piob(nb);
		sum = sum_int(nb);
		sq = sqr(sum);
		while (sum != 0)
		{
			c1 = '0' + (nb / sq);
			write(1, &c1, 1);
			nb = nb - (sq * (nb / sq));
			sq = sq / 10;
			sum--;
		}
	}
	else
		write(1, "-2147483648", 11);
}
