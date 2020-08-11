/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncliff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/06 10:57:30 by ncliff            #+#    #+#             */
/*   Updated: 2020/08/06 15:01:56 by ncliff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_create_elem(void *data)
{
	t_list *a;

	a = (t_list*)malloc(sizeof(t_list));
	if (a == NULL)
		return (NULL);
	a->next = NULL;
	a->data = data;
	return (a);
}
