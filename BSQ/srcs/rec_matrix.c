/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rec_matrix.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncliff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/10 15:19:25 by ncliff            #+#    #+#             */
/*   Updated: 2020/08/12 18:41:45 by cobara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/matrix.h"
#include "../includes/algoritm.h"

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

void	swp(char *ch, char c1, char c2)
{
	if (ch[g_a] == c1)
		g_matrix[g_n][g_i] = 1;
	if (ch[g_a] == c2)
		g_matrix[g_n][g_i] = 0;
}

void	mass_f(char *ch, char c1, char c2)
{
	g_matrix = NULL;
	g_matrix = (int**)malloc(sizeof(int*) * (sz_nbr_str(ch)));
	if (g_matrix == NULL)
		return ;
	while (ch[g_a] != '\n' && ch[g_a] != '\0')
		g_a++;
	if (ch[g_a] == '\n')
		g_a++;
	while (ch[g_a] != '\0')
	{
		g_i = 0;
		g_matrix[g_n] = (int*)malloc(sizeof(int) * (sz_str(&ch[g_a])));
		while (ch[g_a] != '\n' && ch[g_a] != '\0')
		{
			swp(ch, c1, c2);
			g_i++;
			g_a++;
		}
		g_n++;
		g_a++;
	}
	g_a = 0;
	g_n = 0;
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
