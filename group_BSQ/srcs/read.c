/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykolomie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 18:04:02 by ykolomie          #+#    #+#             */
/*   Updated: 2016/11/16 21:36:05 by ykolomie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "read.h"
#include <stdlib.h>
#include <unistd.h>

char	*expand_buf(char *buf, unsigned int *size)
{
	char			*new_buf;
	unsigned int	i;

	new_buf = malloc(sizeof(char) * (*size) * 2);
	i = 0;
	while (i < *size)
	{
		new_buf[i] = buf[i];
		i++;
	}
	*size *= 2;
	free(buf);
	return (new_buf);
}

char	*read_file(int fd)
{
	char			*buf;
	unsigned int	length;
	unsigned int	buf_size;
	int				readed;

	length = 0;
	buf_size = 16;
	buf = malloc(sizeof(char) * buf_size);
	while ((readed = read(fd, buf + length, buf_size - length)))
	{
		length += readed;
		if (length == buf_size)
			buf = expand_buf(buf, &buf_size);
	}
	buf[length] = '\0';
	return (buf);
}

int		ft_atoi(char *str)
{
	int	result;

	result = 0;
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + *str - '0';
		str++;
	}
	if (*str != '\0')
		return (0);
	return (result);
}

char	*fill_line(char **str)
{
	char	*res;
	int		length;
	int		i;

	length = 0;
	while (!((*str)[length] == '\n' || (*str)[length] == '\0'))
		length++;
	res = malloc(sizeof(char) * length + 1);
	res[length--] = '\0';
	i = 0;
	while (i <= length)
	{
		res[i++] = **str;
		(*str)++;
	}
	(*str)++;
	return (res);
}

char	**ft_split_linebreak(char *buf)
{
	char	**res;
	int		lines;
	char	*stepbuf;
	int		i;
	char	*for_delete;

	lines = 0;
	for_delete = buf;
	stepbuf = buf;
	while (*stepbuf)
		if (*stepbuf++ == '\n')
			lines++;
	if (*(stepbuf - 1) != '\n')
		return (0);
	res = malloc(sizeof(char*) * lines + 1);
	res[lines] = 0;
	i = 0;
	while (i < lines)
		res[i++] = fill_line(&buf);
	free(for_delete);
	return (res);
}
