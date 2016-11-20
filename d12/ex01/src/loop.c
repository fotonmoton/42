/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   loop.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtertysh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 21:31:15 by gtertysh          #+#    #+#             */
/*   Updated: 2016/11/10 21:43:30 by gtertysh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <unistd.h>
#include <fcntl.h>

void	loop(int argc, char **argv, char *buf)
{
	int i;
	int fd;
	int readed;

	i = 1;
	while (i < argc)
	{
		if (argv[i][0] == '-' && argv[i][1] == 0)
			fd = 0;
		else
			fd = open(argv[i], O_RDONLY);
		print_err(argv[i]);
		while ((readed = read(fd, buf, BUF_SIZE)) && fd != -1)
		{
			if (print_err(argv[i]))
				break ;
			buf[readed] = '\0';
			ft_putstr(buf);
		}
		close(fd);
		i++;
	}
}
