/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtertysh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 21:22:08 by gtertysh          #+#    #+#             */
/*   Updated: 2016/11/11 22:24:57 by gtertysh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdlib.h>

void	*btree_search_item(t_btree *root, void *data_ref,
		int (*cmpf)(void *, void *))
{
	void	*ret;

	ret = NULL;
	if (!root)
		return (0);
	{
		ret = btree_search_item(root->left, data_ref, cmpf);
		if (ret)
			return (ret);
		if (cmpf(data_ref, root->item) == 0)
			return (root->item);
		return (btree_search_item(root->right, data_ref, cmpf));
	}
}
