/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtertysh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 15:34:16 by gtertysh          #+#    #+#             */
/*   Updated: 2016/11/03 19:20:40 by gtertysh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		count_chars(int argc, char **argv)
{
	int i;
	int j;
	int chars;

	i = 1;
	j = 0;
	chars = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			j++;
			chars++;
		}
		i++;
	}
	return (chars);
}

void	fill_string(int argc, char **argv, char *concat)
{
	int i;
	int j;
	int c;

	i = 1;
	j = 0;
	c = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			concat[c] = argv[i][j];
			j++;
			c++;
		}
		concat[c] = '\n';
		c++;
		i++;
	}
	concat[--c] = '\0';
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*concat;
	int		chars;

	chars = count_chars(argc, argv);
	concat = (char*)malloc(sizeof(char) * (chars + argc));
	fill_string(argc, argv, concat);
	return (concat);
}
