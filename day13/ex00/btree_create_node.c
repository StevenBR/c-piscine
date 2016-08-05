/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/29 15:18:23 by srodrigu          #+#    #+#             */
/*   Updated: 2016/07/29 15:18:24 by srodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdio.h>

t_btree *btree_create_node(void *item)
{
	t_btree *new_node;


	if((new_node = malloc(sizeof(t_btree))))
	{
		new_node->item = item;
		new_node->left = 0;
		new_node->right = 0;
		ft_putstr("I live!");
	}
	else
	{
		ft_putstr("Error #394: trouble creating node");
	}
	return (new_node);
}

int main()
{
	char *a = "aww ye";
	t_btree *test_tree;


	test_tree = btree_create_node((void*)a);

	ft_putstr((char*)test_tree->item);
	return (0);
}
