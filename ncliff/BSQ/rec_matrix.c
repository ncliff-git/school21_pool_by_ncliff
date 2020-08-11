/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rec_matrix.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncliff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/10 15:19:25 by ncliff            #+#    #+#             */
/*   Updated: 2020/08/11 15:20:19 by ncliff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "matrix.h"

int g_i = 0;
int g_n = 0;
int g_a = 0;

int		sz_nbr_str(char *ch)
{
	int i;
	int sum;

	i = 0;
	sum = 0;
	while (ch[i] != '\0')
	{
		while (ch[i] == '\n' && ch[i + 1] == '\n')
			i++;
		if (ch[i] == '\n')
			sum++;
		i++;
	}
	return (sum);
}

int		sz_str(char *ch)
{
	int i;

	i = 0;
	while (ch[i] != '\n' && ch[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	swp(int ***mass, char *ch, char c1, char c2)
{
	if (ch[g_a] == c1)
		(*mass)[g_n][g_i] = 1;
	if (ch[g_a] == c2)
		(*mass)[g_n][g_i] = 0;
}

int		**mass_f(char *ch, char c1, char c2)
{
	int		**mass;

	mass = (int**)malloc(sizeof(int*) * (sz_nbr_str(ch)));
	if (mass == NULL)
		return (NULL);
	while (ch[g_a] != '\n' && ch[g_a] != '\0')
		g_a++;
	if (ch[g_a] == '\n')
		g_a++;
	while (ch[g_a] != '\0')
	{
		g_i = 0;
		mass[g_n] = (int*)malloc(sizeof(int) * (sz_str(&ch[g_a])));
		while (ch[g_a] != '\n' && ch[g_a] != '\0')
		{
			swp(&mass, ch, c1, c2);
			g_i++;
			g_a++;
		}
		g_n++;
		g_a++;
	}
	return (mass);
}

int		mass_test(char *ch, char c1, char c2)
{
	int i;

	i = 0;
	while (ch[i] != '\n')
		i++;
	if (ch[i] == '\n')
		i++;
	while (ch[i] != '\0')
	{
		if (ch[i] != '\n' && ch[i] != c1 && ch[i] != c2)
			return (0);
		i++;
	}
	return (1);
}

