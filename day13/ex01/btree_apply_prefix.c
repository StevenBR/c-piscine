/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_prefix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/29 15:20:11 by srodrigu          #+#    #+#             */
/*   Updated: 2016/07/29 16:04:41 by srodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void btree_apply_prefix(t_btree *root, void(*applyf)(void *))
{
	if(root == NULL)
	{
		return ;
	}
	else
	{
		apply(root->item);
		btree_apply_prefix(root->left, applyf);
		btree_apply_prefix(root->right, applyf);
	}
	return (0);
}

void put_tree_node(void data)
{
	ft_putstr(data);
}

int main()
{
	char *a;
	t_btree *test_tree;

	a = "aww ye";
	test_tree = btree_create_node((void*)a);
	btree_apply_prefix(&test_tree, &put_tree_node);
	return (0);
}
