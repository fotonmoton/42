/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtertysh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 15:17:07 by gtertysh          #+#    #+#             */
/*   Updated: 2016/11/12 15:17:18 by gtertysh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	rush_print(int x, int y, int i, int j)
{
	if (j > 1 && j < x && i > 1 && i < y)
		ft_putchar(' ');
	else if (j == 1 && i == 1)
		ft_putchar('/');
	else if (j == x && i == 1)
		ft_putchar('\\');
	else if (j == 1 && i == y)
		ft_putchar('\\');
	else if (j == x && i == y)
		ft_putchar('/');
	else if ((j > 1 && j < x) && (i == 1 || i == y))
		ft_putchar('*');
	else
		ft_putchar('*');
}

int		rush(int x, int y)
{
	int i;
	int j;

	i = 1;
	j = 1;
	if (x < 0 || y < 0)
		return (1);
	if (x == 0 || y == 0)
		return (0);
	while (i <= y)
	{
		while (j <= x)
		{
			rush_print(x, y, i, j);
			j++;
		}
		ft_putchar('\n');
		i++;
		j = 1;
	}
	return (0);
}
