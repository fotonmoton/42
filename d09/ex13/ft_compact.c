/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_compact.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtertysh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 06:46:08 by gtertysh          #+#    #+#             */
/*   Updated: 2016/11/04 07:21:09 by gtertysh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_compact(char **tab, int length)
{
	int i;
	int j;

	i = 0;
	while (i < length)
	{
		if (tab[i] == 0)
		{
			while (i + 1 < length)
			{
				tab[i] = tab[i + 1];
				i++;
			}
			length--;
			tab[i] = 0;
			i = -1;
		}
		i++;
	}
	return (length);
}
