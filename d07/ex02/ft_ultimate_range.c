/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtertysh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 11:21:09 by gtertysh          #+#    #+#             */
/*   Updated: 2016/11/03 21:53:42 by gtertysh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int		i;
	int		*new_array;

	i = 0;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	new_array = (int*)malloc(sizeof(int) * (max - min));
	while (i < max - min)
	{
		new_array[i] = min + i;
		i++;
	}
	*range = new_array;
	return (max - min);
}
