/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncliff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/05 17:30:59 by ncliff            #+#    #+#             */
/*   Updated: 2020/08/05 22:45:44 by ncliff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "my_math.h"

int		ft_atoi(char *str)
{
	int minus;
	int n;
	int yesnumber;

	n = 0;
	yesnumber = 0;
	minus = 0;
	while (*str == 32 || *str == '\t' || *str == '\n')
		str++;
	while (*str)
	{
		if ((*str == '-') && yesnumber == 0)
			minus++;
		else if (48 <= *str && *str <= 57)
		{
			n = n * 10 + (*str - '0');
			yesnumber++;
		}
		else if (*str != '+' || yesnumber > 0)
			break ;
		str++;
	}
	if (!(minus % 2 == 0))
		n *= -1;
	return (n);
}

int		prov_na_arg(int argc, char **argv)
{
	int		i;
	int		t;
	char	*oper[5];

	oper[0] = "+";
	oper[1] = "-";
	oper[2] = "/";
	oper[3] = "*";
	oper[4] = "%";
	i = 0;
	t = 0;
	if (argc != 4)
		return (0);
	while (i < 5)
	{
		if (oper[i][0] == argv[2][0])
			return (i + 1);
		i++;
	}
	return (0);
}

void	funk_is(int n1, int n2, int (*f)(int, int))
{
	ft_putnbr(f(n1, n2));
	write(1, "\n", 1);
}

int		funk(int n1, int n2, int pnt)
{
	int(*nbr[5])(int, int);

	nbr[0] = &pls;
	nbr[1] = &minus;
	nbr[2] = &div;
	nbr[3] = &mult;
	nbr[4] = &rema;
	if (pnt == 0)
		funk_is(n1, n2, nbr[0]);
	if (pnt == 1)
		funk_is(n1, n2, nbr[1]);
	if (pnt == 2)
		funk_is(n1, n2, nbr[2]);
	if (pnt == 3)
		funk_is(n1, n2, nbr[3]);
	if (pnt == 4)
		funk_is(n1, n2, nbr[4]);
	return (0);
}

int		main(int argc, char **argv)
{
	int n;

	if (argc != 4)
		return (0);
	n = -1;
	n = prov_na_arg(argc, argv) - 1;
	if (ft_atoi(argv[3]) == 0 && n == 2)
	{
		write(1, "Stop : division by zero\n", 24);
		return (0);
	}
	if (ft_atoi(argv[3]) == 0 && n == 4)
	{
		write(1, "Stop : modulo by zero\n", 22);
		return (0);
	}
	if (n == -1)
	{
		write(1, "0", 1);
		return (0);
	}
	funk(ft_atoi(argv[1]), ft_atoi(argv[3]), n);
	return (0);
}
