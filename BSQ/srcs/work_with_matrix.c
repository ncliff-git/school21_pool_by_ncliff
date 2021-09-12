/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   work_with_matrix.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cobara <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 20:10:16 by cobara            #+#    #+#             */
/*   Updated: 2020/08/12 17:07:45 by cobara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/algoritm.h"
#include "../includes/matrix.h"

int		**find_sq(void)
{
	int		i;
	int		j;
	int		**proxy;

	i = 0;
	j = 0;
	proxy = (int **)malloc((unsigned long)g_line * sizeof(int *));
	while (i < g_line)
	{
		proxy[i] = (int*)malloc((unsigned long)g_column * sizeof(int));
		proxy[i][0] = g_matrix[i][0];
		i++;
	}
	while (j < g_column)
	{
		proxy[0][j] = g_matrix[0][j];
		j++;
	}
	return (proxy);
}

int		**set_val(void)
{
	int		**setting;
	int		i;
	int		j;

	i = 1;
	setting = find_sq();
	while (i < g_line)
	{
		j = 1;
		while (j < g_column)
		{
			if (g_matrix[i][j] == 1)
			{
				setting[i][j] = min(setting[i][j - 1],
						setting[i - 1][j],
						setting[i - 1][j - 1]) + 1;
			}
			else
				setting[i][j] = 0;
			j++;
		}
		i++;
	}
	return (setting);
}

void	set_index(void)
{
	int **result;
	int i;
	int j;

	i = 0;
	j = 0;
	result = set_val();
	g_max = result[0][0];
	g_max_i = 0;
	g_max_j = 0;
	while (i < g_line)
	{
		j = 0;
		while (j < g_column)
		{
			if (g_max < result[i][j])
			{
				g_max = result[i][j];
				g_max_i = i;
				g_max_j = j;
			}
			j++;
		}
		i++;
	}
}

void	set_symb(void)
{
	int i;
	int j;

	i = g_max_i;
	while (i > g_max_i - g_max)
	{
		j = g_max_j;
		while (j > g_max_j - g_max)
		{
			g_matrix[i][j] = 2;
			j--;
		}
		i--;
	}
}
