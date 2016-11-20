/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtertysh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 12:24:20 by gtertysh          #+#    #+#             */
/*   Updated: 2016/11/12 14:54:08 by gtertysh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdlib.h>

t_btree		*btree_create_node(void *item)
{
	t_btree	*new_node;

	new_node = NULL;
	if ((new_node = malloc(sizeof(t_btree))))
	{
		new_node->left = NULL;
		new_node->right = NULL;
		new_node->item = item;
	}
	return (new_node);
}
