/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_for_main2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncliff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/09 19:14:07 by ncliff            #+#    #+#             */
/*   Updated: 2020/08/09 22:40:01 by ncliff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "test_file.h"

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

char	**mass_f(char *ch, int i, int n, int a)
{
	char	**mass;

	mass = (char**)malloc(sizeof(char*) * (sz_nbr_str(ch) + 2));
	if (mass == NULL)
		return (NULL);
	while (ch[a] != '\0')
	{
		i = 0;
		while (ch[a] == '\n' && ch[a + 1] == '\n')
			a++;
		mass[n] = (char*)malloc(sizeof(char) * (sz_str(&ch[a]) + 2));
		while (ch[a] != '\n' && ch[a] != '\0')
		{
			while (ch[a] == ' ' && ch[a + 1] == ' ')
				a++;
			mass[n][i] = ch[a];
			i++;
			a++;
		}
		mass[n][i] = '\0';
		n++;
		a++;
	}
	return (mass);
}
