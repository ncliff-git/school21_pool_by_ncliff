/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clean.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cobara <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/12 19:26:12 by cobara            #+#    #+#             */
/*   Updated: 2020/08/12 19:38:03 by cobara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/algoritm.h"
#include "../includes/matrix.h"

void	clean_matrix(void)
{
	int i;

	i = 0;
	while (i < g_line)
	{
		free(g_matrix[i]);
		i++;
	}
	free(g_matrix);
}
