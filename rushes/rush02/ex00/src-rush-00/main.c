/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtertysh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/30 11:13:33 by gtertysh          #+#    #+#             */
/*   Updated: 2016/11/13 21:17:52 by gtertysh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush00.h"
#include "ft.h"

int		main(int argc, char **argv)
{
	int		x;
	int		y;

	if (argc != 3)
		return (0);
	x = ft_atoi(argv[1]);
	y = ft_atoi(argv[2]);
	rush(x, y);
	return (0);
}
