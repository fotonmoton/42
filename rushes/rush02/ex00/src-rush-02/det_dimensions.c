/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   det_dimensions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtertysh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 21:29:53 by gtertysh          #+#    #+#             */
/*   Updated: 2016/11/13 21:30:39 by gtertysh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			*det_dimensions(char *str)
{
	int		*xy;
	int		i;

	xy = malloc(sizeof(int) * 2);
	xy[0] = 0;
	xy[1] = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] != '\n')
		{
			xy[0]++;
			i++;
		}
		break ;
	}
	i = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			xy[1]++;
		i++;
	}
	return (xy);
}
