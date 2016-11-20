/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtertysh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 18:35:38 by gtertysh          #+#    #+#             */
/*   Updated: 2016/11/10 18:07:17 by gtertysh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"
#include <string.h>

void	print_data(void *data)
{
	printf("%s\n", data);
}

void	find(void *data)
{

	printf("find: %s!\n", data);
}

int		main(int argc, char **argv)
{
	t_list	*new_list;

	new_list = NULL;
	
	//push_back
	ft_list_push_back(&new_list, "ads");
	ft_list_push_back(&new_list, "addsd");
	
	//push_front
	ft_list_push_front(&new_list, "a");
	ft_list_push_front(&new_list, "b");
	ft_list_push_front(&new_list, "c");
	ft_list_push_front(&new_list, "d");
	printf("\nFirst list: \n");
	
	////print_list
	ft_list_print(new_list);
	
	//////list_size
	printf("Number of elements: %d\n", ft_list_size(new_list));
	
	////list_last
	printf("last elemet: %s\n\n", (ft_list_last(new_list))->data);
	
	//push_params
	printf("\nList with program arguments:\n");
	ft_list_print(ft_list_push_params(argc, argv));
	
	//clear list
	printf("\nFirst list after free: \n");
	ft_list_clear(&new_list);
	ft_list_print(new_list);
	
	//list_at
	ft_list_push_back(&new_list, "asd");
	ft_list_push_back(&new_list, "dsa");
	printf("Element of new_list at 0: %s\n", ft_list_at(new_list, 0)->data);

	//reverse_list
	ft_list_clear(&new_list);
	ft_list_push_back(&new_list, "1");
	ft_list_push_back(&new_list, "2");
	ft_list_push_back(&new_list, "3");
	ft_list_push_back(&new_list, "4");
	printf("new_list before reverse: \n");
	ft_list_print(new_list);
	ft_list_reverse(&new_list);
	printf("new_list after reverse: \n");
	ft_list_print(new_list);
	
	//list_foreach
	printf("new_list print foreach: \n");
	ft_list_foreach(new_list, print_data);
	ft_list_push_front(&new_list, "asd");
	ft_list_push_front(&new_list, "asd");
	ft_list_foreach(new_list, print_data);
	
	//list_foreach_if
	ft_list_foreach_if(new_list, find, "", strcmp);
	printf(" find data: %s\n", (ft_list_find(new_list, "4", strcmp)->data));
	return (0);
}
