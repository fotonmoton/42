/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtertysh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 15:19:18 by gtertysh          #+#    #+#             */
/*   Updated: 2016/11/09 18:13:54 by gtertysh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	if (*begin_list == NULL)
		(*begin_list) = ft_create_elem(data);
	else
	{
		while ((*begin_list)->next)
			begin_list = &(*begin_list)->next;
		(*begin_list)->next = ft_create_elem(data);
	}
}
