/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ncliff_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncliff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/12 11:41:44 by ncliff            #+#    #+#             */
/*   Updated: 2020/08/12 18:57:24 by cobara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/algoritm.h"

int		test(char *ch, char c1, char c2)
{
	if ((g_ch = cheak_file(ch)) == NULL)
		return (0);
	if ((len_test(g_ch, g_line)) < 0)
		return (0);
	if (mass_test(g_ch, c1, c2) == 0)
		return (0);
	mass_f(g_ch, c1, c2);
	if (g_matrix == NULL)
		return (0);
	return (1);
}
