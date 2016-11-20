/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_suffix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtertysh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 18:59:02 by gtertysh          #+#    #+#             */
/*   Updated: 2016/11/11 21:21:50 by gtertysh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void		btree_apply_suffix(t_btree *root, void (*apply)(void *))
{
	if (!root)
		return ;
	btree_apply_suffix(root->left, apply);
	btree_apply_suffix(root->right, apply);
	apply(root->item);
}
