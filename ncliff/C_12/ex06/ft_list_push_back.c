/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncliff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/06 16:14:46 by ncliff            #+#    #+#             */
/*   Updated: 2020/08/06 19:09:34 by ncliff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *last;
	t_list *nxt;
    
    if (*begin_list == NULL)
    {
        *begin_list = ft_create_elem(data);
        return ;
    }
	nxt = ft_create_elem(data);
	last = *begin_list;
	if (last == 0)
		return ;
	while (last->next != 0)
		last = last->next;
	last->next = nxt;
}
