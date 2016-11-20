/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtertysh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 18:36:22 by gtertysh          #+#    #+#             */
/*   Updated: 2016/11/10 21:40:50 by gtertysh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include "ft.h"

int		main(int argc, char **argv)
{
	int		readed;
	char	buf[BUF_SIZE + 1];

	if (argc == 1)
	{
		while ((readed = read(0, buf, BUF_SIZE)))
		{
			buf[readed] = '\0';
			ft_putstr(buf);
		}
	}
	else
	{
		loop(argc, argv, buf);
	}
	return (0);
}
