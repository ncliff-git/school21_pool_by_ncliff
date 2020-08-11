/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjacqual <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 21:31:29 by mjacqual          #+#    #+#             */
/*   Updated: 2020/08/07 21:33:17 by mjacqual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_btree.h"

t_btree		*btree_create_node(void *item);
void		btree_apply_prefix(t_btree *root, void (*f)(void *));
void		btree_apply_infix(t_btree *root, void (*f)(void *));
void		btree_apply_suffix(t_btree *root, void (*f)(void *));

void		ft_create_tree(t_btree **root)
{
	int	*a = malloc(sizeof(int));
	*a = 3;
	int	*b = malloc(sizeof(int));
	*b = 2;
	int	*c = malloc(sizeof(int));
	*c = 9;
	int	*d = malloc(sizeof(int));
	*d = 1;
	int	*f = malloc(sizeof(int));
	*f = 90;
	int	*m = malloc(sizeof(int));
	*m = 12;
	*root = btree_create_node(a);
	(*root)->left = btree_create_node(b);
	(*root)->right = btree_create_node(c);
	(*root)->right->left = btree_create_node(d);
	(*root)->left->right = btree_create_node(f);
	(*root)->left->right->right = btree_create_node(m);
}

void		f(void *a)
{
	printf("%d ", *((int *)a));
}

int		main(void)
{
	t_btree		*node;

	ft_create_tree(&node);
	printf("Your output: ");
	btree_apply_suffix(node, &f); 
	printf("\n");
	printf("Expected output: 12 90 2 1 9 3\n");
	return (0);
}
