/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykolomie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 19:14:37 by ykolomie          #+#    #+#             */
/*   Updated: 2016/11/16 22:11:48 by ykolomie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"
#include "output.h"
#include "read.h"
#include <fcntl.h>
#include <unistd.h>

int	main(int argc, char **argv)
{
	int		fd;
	int		i;
	char	*buf;

	if (argc == 1)
	{
		buf = read_file(0);
		bsq(buf);
	}
	else
	{
		i = 0;
		while (++i < argc)
		{
			if ((fd = open(argv[i], O_RDONLY)) == -1)
				continue ;
			buf = read_file(fd);
			bsq(buf);
			if (i != argc - 1)
				ft_putchar('\n');
			close(fd);
		}
	}
	return (0);
}
