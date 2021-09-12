/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncliff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/27 16:13:16 by ncliff            #+#    #+#             */
/*   Updated: 2020/07/27 16:15:59 by ncliff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int			nbr_revers(int nbr, int *flag);
void		my_print(int *ch, char *base, int i);
int			my_base(char *base);

void		ft_putnbr_base(int nbr, char *base)
{
	int out[400];
	int sz_base;
	int i;
	int flag;

	sz_base = 0;
	i = 0;
	flag = 0;
	if (my_base(base) != 0)
	{
		while (base[sz_base] != '\0')
			sz_base++;
		if (nbr == 0)
			write(1, &base[0], 1);
		nbr = nbr_revers(nbr, &flag);
		while (nbr)
		{
			out[i] = nbr % sz_base;
			nbr = nbr / sz_base;
			i++;
		}
		if (flag == 1)
			out[0] = 8 % sz_base;
	}
	my_print(out, base, i);
}

int			nbr_revers(int nbr, int *flag)
{
	if (nbr == -2147483648)
	{
		*flag = 1;
		nbr++;
	}
	if (nbr < 0)
	{
		nbr *= -1;
		write(1, "-", 1);
	}
	return (nbr);
}

void		my_print(int *ch, char *base, int i)
{
	--i;
	while (i >= 0)
	{
		write(1, &base[ch[i]], 1);
		i--;
	}
}

int			my_base(char *base)
{
	int a;
	int b;

	a = 0;
	b = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[a] != '\0')
	{
		b = a + 1;
		if (base[a] <= 32 || 127 <= base[a])
			return (0);
		if (base[a] == '+' || base[a] == '-')
			return (0);
		while (base[b] != '\0')
		{
			if (base[a] == base[b])
				return (0);
			b++;
		}
		a++;
	}
	return (1);
}
