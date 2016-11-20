/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_max.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykolomie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 18:13:45 by ykolomie          #+#    #+#             */
/*   Updated: 2016/11/16 18:57:41 by ykolomie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIND_MAX_H
# define FIND_MAX_H

typedef	struct	s_coord
{
	int	x;
	int	y;
	int	size;
}				t_coord;

int				*create_matrix(char **buf, int rows, int cols, char empty);
t_coord			find_max_square(int *m, int rows, int cols);

#endif
