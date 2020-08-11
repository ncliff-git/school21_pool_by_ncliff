/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main05.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjacqual <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/06 18:36:09 by mjacqual          #+#    #+#             */
/*   Updated: 2020/08/06 18:44:10 by mjacqual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

#include <stdio.h>

t_list		*ft_create_elem(void *data);
void		ft_list_push_front(t_list **begin_list, void *data);
int			ft_list_size(t_list *begin_list);
t_list		*ft_list_last(t_list *begin_list);
void		ft_list_push_back(t_list **begin_list, void *data);
t_list		*ft_list_push_strs(int size, char **strs);
void		ft_list_clear(t_list *begin_list, void (*free_fct)(void *));
t_list		*ft_list_at(t_list *begin_lst, unsigned int nbr);
void		ft_list_reverse(t_list **begin_list);
void		ft_list_foreach(t_list *begin_list, void (*f)(void *));
void		ft_list_foreach_if(t_list *begin_list, void (*f)(void *), void
*data_ref, int (*cmp)(void *, void*));
t_list		*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)(void *, void *));
void		ft_list_remove_if(t_list **begin_list, void *data_ref, int
(*cmp)(void *, void *), void (*free_fct)(void *));
void		ft_list_merge(t_list **begin_list1, t_list *begin_list2);
void		ft_list_sort(t_list **begin_list, int (*cmp)(void *, void *));
void		ft_list_reverse_fun(t_list *begin_list);
void		ft_sorted_list_insert(t_list **begin_list, void *data,
int (*cmp)(void *, void *));
void		ft_sorted_list_merge(t_list **begin_list1, t_list *begin_list2,
int (*cmp)(void *, void *));

void	ft_list_print(t_list *head)
{
	while (head)
	{
		printf("%s\n", head->data);
		head = head->next;
	}
}

int		main(int argc, char **argv)
{
	t_list *begin = NULL;

	begin = ft_list_push_strs(argc, argv);
	ft_list_print(begin);
	printf("\n");
	
	t_list *begin1 = NULL;

	begin1 = ft_list_push_strs(0, argv);
	ft_list_print(begin1);
	printf("\n");

	t_list *begin2 = NULL;

	begin2 = ft_list_push_strs(-34, argv);
	ft_list_print(begin2);
	printf("\n");

	t_list *begin3 = NULL;

	begin3 = ft_list_push_strs(1, argv);
	ft_list_print(begin3);
	printf("\n");
	return (0);
}
