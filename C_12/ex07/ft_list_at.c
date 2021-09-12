/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncliff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/06 20:29:37 by ncliff            #+#    #+#             */
/*   Updated: 2020/08/06 23:14:29 by ncliff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list			*copy_begin;
	unsigned int	nbr2;

	nbr2 = 0;
	copy_begin = begin_list;
	while (copy_begin != 0)
	{
		if (nbr == nbr2)
			return (copy_begin);
		copy_begin = copy_begin->next;
		nbr2++;
	}
	return (0);
}
