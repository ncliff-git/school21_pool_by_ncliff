/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncliff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/27 11:43:51 by ncliff            #+#    #+#             */
/*   Updated: 2020/08/05 17:54:06 by ncliff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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
