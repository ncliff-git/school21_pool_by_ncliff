/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncliff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/10 17:00:41 by ncliff            #+#    #+#             */
/*   Updated: 2020/08/11 17:42:43 by ncliff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "matrix.h"
#include "ft_arg.h"
#include <stdio.h>

int main(int argc, char **argv)
{
	char	c1;
	char	c2;
	char	c3;
	int		**mass;
	int		b;

	b = 0;
	c1 = c2 = c3 = '0';
	mass = NULL;
	if((b = is_valid_arg(cheak_file(argv[1]), &c1, &c2, &c3)) > -1)
	{
//		if(len_test(cheak_file(argv[1]), b))
//		{
			if((mass_test(cheak_file(argv[1]), c1, c2)))
			{	
				mass = mass_f(cheak_file(argv[1]), c1, c2);
				/*		твой код		*/
				/*		твой код		*/
			}
			else
			{
				write(2, "map error\n", 10);
				return (0);
			}
//		}
		else
		{
			write(2, "map error\n", 10);
			return (0);
		}
    }
	else
	{
		write(2, "map error\n", 10);
		return (0);
	}
	write(2, "\n", 1);
	write(2, "\n", 1);
	write(2, &c1, 1);
	write(2, "\n", 1);
	write(2, &c2, 1);
	write(2, "\n", 1);
	write(2, &c3, 1);
	write(2, "\n", 1);
	write(2, "\n", 1);
	for (int i = 0; i < b; i++)
	{
		for (int n = 0; n < 27; n++)
			printf("%d", mass[i][n]);
		printf("\n");
	}
	return (0);	
}
