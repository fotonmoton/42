/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtertysh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 13:45:26 by gtertysh          #+#    #+#             */
/*   Updated: 2016/11/13 22:17:35 by gtertysh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "rush02.h"

char		*rush_creator(int *dim, t_rush ch)
{
	char	*rush;
	int		x;
	int		y;
	int		i;

	rush = malloc(sizeof(char) * (((dim[0] + 1) * dim[1]) + 1));
	x = 0;
	y = 0;
	i = 0;
	if (dim[0] <= 0 || dim[1] <= 0)
		return (0);
	while (y < dim[1])
	{
		x = 0;
		while (x < dim[0])
		{
			rush[i] = ch(dim, x, y);
			i++;
			x++;
		}
		rush[i++] = '\n';
		y++;
	}
	rush[i] = '\0';
	return (rush);
}
