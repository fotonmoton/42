/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtertysh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 18:18:22 by gtertysh          #+#    #+#             */
/*   Updated: 2016/11/07 19:37:05 by gtertysh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;

	i = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) == -1 || f(tab[i], tab[i + 1]) == 0)
			i++;
		else
		{
			i = 0;
			while (i < length - 1)
			{
				if (f(tab[i], tab[i + 1]) == 1 || f(tab[i], tab[i + 1]) == 0)
					i++;
				else
					return (0);
			}
		}
	}
	return (1);
}
