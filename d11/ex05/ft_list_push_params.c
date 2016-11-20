/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtertysh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 21:02:05 by gtertysh          #+#    #+#             */
/*   Updated: 2016/11/09 17:30:53 by gtertysh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list		*ft_list_push_params(int ac, char **av)
{
	t_list	*begin;
	t_list	*temp;
	int		i;

	i = 1;
	begin = NULL;
	temp = NULL;
	while (i < ac)
	{
		temp = ft_create_elem(av[i]);
		temp->next = begin;
		begin = temp;
		i++;
	}
	return (begin);
}
