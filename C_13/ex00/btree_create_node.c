/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncliff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 20:01:36 by ncliff            #+#    #+#             */
/*   Updated: 2020/08/07 21:27:49 by ncliff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

t_btree	*btree_create_node(void *item)
{
	t_btree	*a;

	a = (t_btree*)malloc(sizeof(t_btree));
	if (a == NULL)
		return (NULL);
	a->left = NULL;
	a->right = NULL;
	a->item = item;
	return (a);
}
