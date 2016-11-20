/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtertysh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 12:24:31 by gtertysh          #+#    #+#             */
/*   Updated: 2016/11/12 14:46:43 by gtertysh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void	print_item(void *item)
{
	printf("%s\n", (char *)item);
}

int		void_strcmp(void *s1, void *s2)
{
	while (*((char *)s1) && *((char *)s2) && *((char *)s1) == *((char *)s2))
	{
		s1++;
		s2++;
	}
	if (*((char *)s1) > *((char *)s2))
		return (*((char *)s1) - *((char *)s2));
	if (*((char *)s1) < *((char *)s2))
		return (*((char *)s1) - *((char *)s2));
	return (0);
}

int		main(void)
{
	t_btree		*tree;
	t_btree		*new_tree;

	tree = NULL;
	new_tree = NULL;
	
	//create nodes
	tree = btree_create_node("F");
	tree->left = btree_create_node("B");
	tree->left->left = btree_create_node("A");
	tree->left->right = btree_create_node("D");
	tree->left->right->left = btree_create_node("C");
	tree->left->right->right = btree_create_node("E");
	tree->right = btree_create_node("G");
	tree->right->right = btree_create_node("I");
	tree->right->right->left = btree_create_node("H");
	
	//prefix traersal
	printf("prefix\n");
	btree_apply_prefix(tree, print_item);

	//infix traversal
	printf("infix\n");
	btree_apply_infix(tree, print_item);
	
	//suffix traversal
	printf("suffix\n");
	btree_apply_suffix(tree, print_item);

	//inserting item
	btree_insert_data(&new_tree, "1", void_strcmp);
	btree_insert_data(&new_tree, "2", void_strcmp);
	btree_insert_data(&new_tree, "3", void_strcmp);
	btree_insert_data(&new_tree, "4", void_strcmp);
	printf("inserting item. prefix output:\n");
	btree_apply_prefix(new_tree, print_item);	
	
	//searching with infix traversal
	printf("searching with infix traversal: \n");
	printf("%s\n", btree_search_item(new_tree, "2", void_strcmp));

	return (0);
}
