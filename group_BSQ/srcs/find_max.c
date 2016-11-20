/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_max.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykolomie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 17:57:16 by ykolomie          #+#    #+#             */
/*   Updated: 2016/11/16 20:28:27 by ykolomie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "find_max.h"
#include <stdlib.h>

int		*create_matrix(char **buf, int rows, int cols, char empty)
{
	int	*matrix;
	int	i;
	int	j;

	matrix = malloc(sizeof(int) * rows * cols);
	i = 0;
	while (i < rows)
	{
		j = 0;
		while (j < cols)
		{
			if (buf[i][j] == empty)
				matrix[i * cols + j] = 1;
			else
				matrix[i * cols + j] = 0;
			j++;
		}
		i++;
	}
	return (matrix);
}

int		min(int a, int b, int c)
{
	if (a <= b && a <= c)
		return (a);
	if (b <= a && b <= c)
		return (b);
	if (c <= a && c <= b)
		return (c);
	return (0);
}

void	find_all_square(int *m, int rows, int cols)
{
	int	i;
	int	j;

	i = 1;
	while (i < rows)
	{
		j = 1;
		while (j < cols)
		{
			if (m[i * cols + j] == 1)
				m[i * cols + j] = min(m[(i - 1) * cols + j],
									m[i * cols + j - 1],
									m[(i - 1) * cols + j - 1]) + 1;
			j++;
		}
		i++;
	}
}

t_coord	find_max_square(int *m, int rows, int cols)
{
	int		i;
	int		j;
	t_coord	max;

	find_all_square(m, rows, cols);
	max.x = 0;
	max.y = 0;
	max.size = m[0];
	i = -1;
	while (++i < rows)
	{
		j = -1;
		while (++j < cols)
			if (max.size < m[i * cols + j])
			{
				max.size = m[i * cols + j];
				max.y = i;
				max.x = j;
			}
	}
	free(m);
	return (max);
}
