/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_button.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtertysh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 22:46:07 by gtertysh          #+#    #+#             */
/*   Updated: 2016/11/03 23:15:53 by gtertysh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_button(int i, int j, int k)
{
	int		temp[3];
	int		x;
	int		swap;

	x = 0;
	temp[0] = i;
	temp[1] = j;
	temp[2] = k;
	while (x < 3)
	{
		j = 0;
		while (j < 2)
		{
			if (temp[j] > temp[j + 1])
			{
				swap = temp[j];
				temp[j] = temp[j + 1];
				temp[j + 1] = swap;
			}
			j++;
		}
		x++;
	}
	return (temp[1]);
}
