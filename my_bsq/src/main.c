/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtertysh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 16:17:17 by gtertysh          #+#    #+#             */
/*   Updated: 2016/11/16 13:29:09 by gtertysh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

# define BUF_S 131072

char	*char_realloc(char *old, unsigned int size)
{
	char *new_p;

	new_p = malloc(size);
	ft_strcpy(new_p, old);
	free(old);
	return (new_p);
}

char	*read_in(int type, char *path)
{
	int		fd;
	int		readed;
	char	buf[BUF_S + 1];
	char	*input;
	int		old_size;

	old_size = 0;
	if (type == 3)
	{
		fd = open(path, O_RDONLY);
		if (fd == -1)
			return (0);
	}
	else
		fd = 0;
	input = malloc(sizeof(char));
	while ((readed = read(fd, buf, BUF_S)))
	{
		
		buf[readed] = '\0';
		old_size = ft_strlen(input);
		input = char_realloc(input, old_size + readed + 1);
		ft_strcat(input, buf);
	}
	return (input);
}

int		main(int argc, char **argv)
{
	char	*input_string;
	int		i;

	i = 1;
	input_string = 0;
	if (argc >= 2)
	{
		while (i < argc)
		{
			input_string = read_in(3, argv[i]);
			//ft_putstr(input_string);
			//free(input_string);
			i++;
		}
	}
	else
	{
		input_string = read_in(0, 0);
		//ft_putstr(input_string);
		free(input_string);
	}
	//while(1);
	return (0);
}
