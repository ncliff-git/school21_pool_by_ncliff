/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   other_function.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cobara <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 20:00:48 by cobara            #+#    #+#             */
/*   Updated: 2020/08/12 17:08:06 by cobara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/algoritm.h"

int		min(int a, int b, int c)
{
	int min;

	min = a;
	if (min > b)
		min = b;
	if (min > c)
		min = c;
	return (min);
}

void	print(void)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	j = 0;
	while (i < g_line)
	{
		j = 0;
		while (j < g_column)
		{
			c = g_matrix[i][j] + '0';
			if (c == '1')
				write(1, &g_s1, 1);
			else if (c == '0')
				write(1, &g_s2, 1);
			else if (c == '2')
				write(1, &g_s3, 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
