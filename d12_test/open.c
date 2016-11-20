/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtertysh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 12:22:16 by gtertysh          #+#    #+#             */
/*   Updated: 2016/11/10 16:37:05 by gtertysh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include "ft.h"

#define BUF_SIZE 100

int		main(int argc, char **argv)
{
	int 	fd;
	int		ret;
	char	buffer[BUF_SIZE + 1];

	if (argc < 2)
	{
		ft_putstr("File name missing.\n");
		return (1);
	}
	else if (argc > 2)
	{
		ft_putstr("Too many arguments.\n");
		return (1);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		return (1);
	}
	while((ret = read(fd, buffer, BUF_SIZE)))
	{
		buffer[ret] = '\0';
		ft_putstr(buffer);
	}
	if (close(fd) == -1)
	{
		return (1);
	}
	return (0);
}
