/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_functions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtertysh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 21:08:59 by gtertysh          #+#    #+#             */
/*   Updated: 2016/11/13 22:08:19 by gtertysh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		ch_rush00(int *dim, int x, int y)
{
	if (x == 0 && y == 0)
		return ('o');
	else if (x == dim[0] - 1 && y == 0)
		return ('o');
	else if (x == 0 && y == dim[1] - 1)
		return ('o');
	else if (x == dim[0] - 1 && y == dim[1] - 1)
		return ('o');
	else if (x > 0 && x < dim[0] - 1 && (y == 0 || y == dim[1] - 1))
		return ('-');
	else if ((x == 0 || x == dim[0] - 1) && (y > 0 && y < dim[1] - 1))
		return ('|');
	else
		return (' ');
}

char		ch_rush01(int *dim, int x, int y)
{
	if (x == 0 && y == 0)
		return ('/');
	else if (x == dim[0] - 1 && y == 0)
		return ('\\');
	else if (x == 0 && y == dim[1] - 1)
		return ('\\');
	else if (x == dim[0] - 1 && y == dim[1] - 1)
		return ('/');
	else if (x > 0 && x < dim[0] - 1 && (y == 0 || y == dim[1] - 1))
		return ('*');
	else if ((x == 0 || x == dim[0] - 1) && (y > 0 && y < dim[1] - 1))
		return ('*');
	else
		return (' ');
}

char		ch_rush02(int *dim, int x, int y)
{
	if (x == 0 && y == 0)
		return ('A');
	else if (x == dim[0] - 1 && y == 0)
		return ('A');
	else if (x == 0 && y == dim[1] - 1)
		return ('C');
	else if (x == dim[0] - 1 && y == dim[1] - 1)
		return ('C');
	else if (x > 0 && x < dim[0] - 1 && (y == 0 || y == dim[1] - 1))
		return ('B');
	else if ((x == 0 || x == dim[0] - 1) && (y > 0 && y < dim[1] - 1))
		return ('B');
	else
		return (' ');
}

char		ch_rush03(int *dim, int x, int y)
{
	if (x == 0 && y == 0)
		return ('A');
	else if (x == dim[0] - 1 && y == 0)
		return ('C');
	else if (x == 0 && y == dim[1] - 1)
		return ('A');
	else if (x == dim[0] - 1 && y == dim[1] - 1)
		return ('C');
	else if (x > 0 && x < dim[0] - 1 && (y == 0 || y == dim[1] - 1))
		return ('B');
	else if ((x == 0 || x == dim[0] - 1) && (y > 0 && y < dim[1] - 1))
		return ('B');
	else
		return (' ');
}

char		ch_rush04(int *dim, int x, int y)
{
	if (x == 0 && y == 0)
		return ('A');
	else if (x == dim[0] - 1 && y == 0)
		return ('C');
	else if (x == 0 && y == dim[1] - 1)
		return ('C');
	else if (x == dim[0] - 1 && y == dim[1] - 1)
		return ('A');
	else if (x > 0 && x < dim[0] - 1 && (y == 0 || y == dim[1] - 1))
		return ('B');
	else if ((x == 0 || x == dim[0] - 1) && (y > 0 && y < dim[1] - 1))
		return ('B');
	else
		return (' ');
}
