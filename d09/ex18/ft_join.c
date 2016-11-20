/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_join.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtertysh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 11:08:56 by gtertysh          #+#    #+#             */
/*   Updated: 2016/11/04 13:32:57 by gtertysh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	fill(char *str, char **tab, char *sep)
{
	int i;
	int j;
	int c;

	i = 0;
	j = 0;
	c = 0;
	while (tab[i])
	{
		j = 0;
		while (tab[i][j])
		{
			str[c++] = tab[i][j++];
		}
		j = 0;
		while (sep[j] && tab[i + 1])
		{
			str[c++] = sep[j++];
		}
		i++;
	}
	str[c] = '\0';
}

char	*ft_join(char **tab, char *sep)
{
	int		i;
	int		j;
	int		chars;
	char	*str;

	i = 0;
	chars = 0;
	if (tab[i] == 0)
		return (0);
	while (tab[i])
	{
		j = 0;
		while (tab[i][j++])
			chars++;
		i++;
	}
	j = 0;
	while (sep[j])
		j++;
	str = (char *)malloc(sizeof(char) * (chars + j * (i - 1) + 1));
	fill(str, tab, sep);
	return (str);
}
