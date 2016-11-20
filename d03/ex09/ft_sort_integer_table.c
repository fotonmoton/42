/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtertysh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/29 10:16:57 by gtertysh          #+#    #+#             */
/*   Updated: 2016/10/29 12:03:44 by gtertysh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_sort_integer_table(int *tab, int size)
{
	int temp;
	int i;
	int a;
	int swapped;
	
	i = 0;
	a = 0;
	while(i < size - 1)
	{
		swapped = 0;
		while(a < size - 1 - i)
		{
			if (*(tab + a) > *(tab + a + 1))
			{
				temp = *(tab + a);
				*(tab + a) = *(tab + a + 1);
				*(tab + a + 1) = temp;
				swapped = 1;
			}
			a++;
		}
		i++;
		if(!swapped)
			break;
	}
}
