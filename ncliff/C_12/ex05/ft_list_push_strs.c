/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncliff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/06 17:43:28 by ncliff            #+#    #+#             */
/*   Updated: 2020/08/06 23:05:23 by ncliff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_list_push_strs(int size, char **strs)
{
	t_list	*last;
	t_list	*new;
	t_list	*one;
	int		i;

	if (size <= 0)
		return (NULL);
	one = ft_create_elem(strs[0]);
	last = one;
	i = 1;
	while (i < size)
	{
		new = ft_create_elem(strs[i]);
		last->next = new;
		last = last->next;
		i++;
	}
	return (one);
}
