/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtertysh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 16:40:08 by gtertysh          #+#    #+#             */
/*   Updated: 2016/11/10 20:42:24 by gtertysh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include "ft.h"

int		main(int argc, char **argv)
{
	int		fd;
	int		readed;
	char	buf[BUF_SIZE + 1];

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
		return (1);
	while ((readed = read(fd, buf, BUF_SIZE)))
	{
		buf[readed] = '\0';
		ft_putstr(buf);
	}
	if ((close(fd) == -1))
		return (1);
	return (0);
}
