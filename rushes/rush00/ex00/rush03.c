/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtertysh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/30 12:58:15 by gtertysh          #+#    #+#             */
/*   Updated: 2016/10/30 15:31:24 by gtertysh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	rush_print(int x, int y, int i, int j)
{
	if (j > 1 && j < x && i > 1 && i < y)
		ft_putchar(' ');
	else if (j == 1 && i == 1)
		ft_putchar('A');
	else if (j == x && i == 1)
		ft_putchar('C');
	else if (j == 1 && i == y)
		ft_putchar('A');
	else if (j == x && i == y)
		ft_putchar('C');
	else if ((j > 1 && j < x) && (i == 1 || i == y))
		ft_putchar('B');
	else
		ft_putchar('B');
}

int		rush(int x, int y)
{
	int i;
	int j;

	i = 1;
	j = 1;
	if (x < 0 || y < 0)
		return (1);
	if (x == 0 || y == 0)
		return (0);
	while (i <= y)
	{
		while (j <= x)
		{
			rush_print(x, y, i, j);
			j++;
		}
		ft_putchar('\n');
		i++;
		j = 1;
	}
	return (0);
}
