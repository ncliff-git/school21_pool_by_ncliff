/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncliff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/23 17:06:48 by ncliff            #+#    #+#             */
/*   Updated: 2020/07/23 22:29:15 by ncliff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int			sum_int(int nbcopy)
{
	int sum;

	sum = 0;
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
	char		min;
	int			sum;
	int			sq;

	sum = 0;
	min = '-';
	if (nb < 0)
	{
		write(1, &min, 1);
		nb *= -1;
	}
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
