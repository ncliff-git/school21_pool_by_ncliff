/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncliff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 16:56:49 by ncliff            #+#    #+#             */
/*   Updated: 2020/08/04 21:44:35 by ncliff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	cat_cat();
int		cat_read(int argc, char **argv);

int		main(int argc, char **argv)
{
	if (argc == 1)
		cat_cat();
	if (argc > 1)
		cat_read(argc, argv);
}
