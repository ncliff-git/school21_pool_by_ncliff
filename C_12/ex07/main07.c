/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main07.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjacqual <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/06 19:03:21 by mjacqual          #+#    #+#             */
/*   Updated: 2020/08/06 19:11:56 by mjacqual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

#include <stdio.h>

#include <string.h>

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

void	ft_list_create(t_list **begin, int argc, char **argv)
{
	while (argc)
		ft_list_push_back(begin, strdup(argv[--argc]));
}

void	ft_list_print(t_list *head)
{
	while (head)
	{
		printf("%s\n", head->data);
		head = head->next;
	}
}

void	free_fct(void *addr)
{
	(void) addr;
}

int		main(int argc, char **argv)
{
	t_list *begin = NULL;
	ft_list_create(&begin, argc, argv);
	ft_list_print(begin);
	printf("\n");
	printf("%d el: %s\n", 0, ft_list_at(begin, 0)->data);
	printf("%d el: %s\n", argc - 1, ft_list_at(begin, argc - 1)->data);
	ft_list_clear(begin, &free);
	return (0);
}
