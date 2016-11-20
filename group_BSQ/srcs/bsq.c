/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykolomie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 17:00:48 by ykolomie          #+#    #+#             */
/*   Updated: 2016/11/16 22:00:13 by ykolomie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "corr_map.h"
#include "read.h"
#include "output.h"
#include "find_max.h"

int		check_one(char *str, char *chset)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	chset[2] = str[len - 1];
	chset[1] = str[len - 2];
	chset[0] = str[len - 3];
	if (chset[0] == chset[1] || chset[0] == chset[2] || chset[1] == chset[2])
		return (0);
	str[len - 3] = '\0';
	return (1);
}

int		check_two(char **start, int *rows, int *cols, char *chset)
{
	int	columns_count;

	if ((*cols = ft_strlen(*start)) < 1)
		return (0);
	*rows = 0;
	while (*start)
	{
		columns_count = 0;
		while ((*start)[columns_count] != '\0')
		{
			if (((*start)[columns_count] != chset[0])
				&& ((*start)[columns_count] != chset[1]))
				return (0);
			columns_count++;
		}
		if (columns_count != *cols)
			return (0);
		start++;
		(*rows)++;
	}
	return (1);
}

char	**check(char *buf, int *rows, int *cols, char *chset)
{
	char	**table;
	int		first_line_rows;

	if ((table = ft_split_linebreak(buf)))
	{
		if (ft_strlen(table[0]) <= 3)
			return (0);
		if (!(check_one(*table, chset)))
			return (0);
		if ((first_line_rows = ft_atoi(*table)) < 0)
			return (0);
		table++;
		if (!(*table))
			return (0);
		if (!(check_two(table, rows, cols, chset)))
			return (0);
		if (*rows != first_line_rows)
			return (0);
		return (table);
	}
	return (0);
}

void	bsq_work(char **table, int rows, int cols, char *charset)
{
	int		*matrix;
	t_coord	max;
	int		i;

	matrix = create_matrix(table, rows, cols, charset[0]);
	max = find_max_square(matrix, rows, cols);
	matrix = 0;
	corr_map(table, max, charset[2]);
	print_map(table);
	i = 0;
	--table;
	while (table[i])
	{
		free(table[i]);
		i++;
	}
	free(table);
}

void	bsq(char *buf)
{
	char	**table;
	int		cols;
	int		rows;
	char	charset[3];

	if ((table = check(buf, &rows, &cols, charset)))
	{
		bsq_work(table, rows, cols, charset);
		table = 0;
	}
	else
		ft_puterror("map error\n");
}
