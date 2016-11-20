/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_print.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtertysh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 12:06:16 by gtertysh          #+#    #+#             */
/*   Updated: 2016/11/11 12:43:25 by gtertysh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdio.h>

void	btree_print(t_btree *tree)
{
	if(!tree)
		return ;
	printf("%s\n", tree->item);
	btree_print(tree->left);
	btree_print(tree->right);
}
