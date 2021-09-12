/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncliff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/05 13:54:42 by ncliff            #+#    #+#             */
/*   Updated: 2020/08/05 22:40:02 by ncliff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	sort_my_b(int *b, int *tab, int length, int (*f)(int, int))
{
	int i;

	i = 0;
	*b = 1;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) < 0)
			*b = 0;
		i++;
	}
}

void	sort_my_a(int *a, int *tab, int length, int (*f)(int, int))
{
	int i;

	i = 0;
	*a = 1;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) > 0)
			*a = 0;
		i++;
	}
}

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int a;
	int b;

	sort_my_b(&b, tab, length, f);
	sort_my_a(&a, tab, length, f);
	if (a == 0 && b == 0)
		return (0);
	return (1);
}
