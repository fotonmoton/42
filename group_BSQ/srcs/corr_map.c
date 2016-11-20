/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   corr_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykolomie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 16:46:45 by ykolomie          #+#    #+#             */
/*   Updated: 2016/11/16 19:33:45 by ykolomie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "find_max.h"

char		**corr_map(char **map, t_coord max, char full)
{
	int		i;
	int		j;

	i = 0;
	while (i < max.size)
	{
		j = 0;
		while (j < max.size)
		{
			map[max.y - i][max.x - j] = full;
			j++;
		}
		i++;
	}
	return (map);
}
