/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncliff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/06 19:19:22 by ncliff            #+#    #+#             */
/*   Updated: 2020/08/06 21:29:17 by ncliff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void ft_list_clear(t_list *begin_list, void (*free_fct)(void *))
{
	t_list *del_list;

	while(begin_list)
	{
		del_list = begin_list;
		begin_list = begin_list->next;
		free_fct(del_list->data);
		free(del_list);
	}
//	free_fct(begin_list->data);
//	free(begin_list);
}
