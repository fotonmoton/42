/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_result.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtertysh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 21:34:06 by gtertysh          #+#    #+#             */
/*   Updated: 2016/11/14 15:02:20 by gtertysh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void		print(int i, int *dim, int *mult, int *wtf)
{
	ft_putstr("[rush-0");
	ft_putnbr(i);
	ft_putstr("] [");
	ft_putnbr(dim[0]);
	ft_putstr("] [");
	ft_putnbr(dim[1]);
	ft_putstr("]");
	*mult = 1;
	*wtf = 0;
}

void		print_result(int *dim, int *checked)
{
	int i;
	int	mult;
	int	wtf;

	i = 0;
	mult = 0;
	wtf = 1;
	if (dim[0] <= 0 || dim[1] <= 0)
	{
		ft_putstr("ALL GLORY TO THE HYPNOTOAD\n");
		return ;
	}
	while (i < 5)
	{
		if (checked[i] == 0)
		{
			if (mult != 0)
				ft_putstr(" || ");
			print(i, dim, &mult, &wtf);
		}
		i++;
	}
	if (wtf)
		ft_putstr("ALL GLORY TO THE HYPNOTOAD");
	ft_putstr("\n");
}
