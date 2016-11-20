/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_rush.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtertysh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 21:33:01 by gtertysh          #+#    #+#             */
/*   Updated: 2016/11/14 14:50:10 by gtertysh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include "rush02.h"
#include <stdlib.h>

int			*find_rush(char *str, int *dim)
{
	t_rush	rush_func[5];
	int		*checked;
	int		i;

	i = 0;
	rush_func[0] = ch_rush00;
	rush_func[1] = ch_rush01;
	rush_func[2] = ch_rush02;
	rush_func[3] = ch_rush03;
	rush_func[4] = ch_rush04;
	checked = malloc(sizeof(int) * 5);
	while (i < 5)
		checked[i++] = 1;
	if (dim[0] <= 0 || dim[1] <= 0)
		return (checked);
	i = 0;
	while (i < 5)
	{
		checked[i] = ft_strcmp(str, rush_creator(dim, rush_func[i]));
		i++;
	}
	return (checked);
}
