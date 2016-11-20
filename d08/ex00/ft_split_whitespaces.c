/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtertysh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 12:42:22 by gtertysh          #+#    #+#             */
/*   Updated: 2016/11/06 17:47:48 by gtertysh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	**ft_split_whitespaces(char *str)
{
	char	**table;
	char	*str_begin;
	int		words;
	int		word_exist;
	int		chars_in_word;
	int		word_position;

	// count words in string
	str_begin = str;
	words = 0;
	while (*str)
	{
		while (*str == ' ' || *str == '\t' || *str == '\n')
			str++;
		word_exist = 0;
		while (*str != ' ' && *str != '\t' && *str != '\n' && *str)
		{
			str++;
			word_exist = 1;
		}
		if (word_exist)
			words++;
	}

	// allocate memory for word pointers
	table = (char **)malloc(sizeof(char *) * (words + 1));
	
	// count chars in word, allocate memory for current word
	// and fill allocated memory
	str = str_begin;
	while (*str)
	{
		word_position = 0;
		while (*str == ' ' || *str == '\t' || *str == '\n')
			str++;
		chars_in_word = 0;
		while (*str != ' ' && *str != '\t' && *str != '\n' && *str)
		{
			str++;
			chars_in_word++;
		}
		table[word_position] = (char *)malloc(sizeof(char) * (chars_in_word + 1));
		while(chars_in_word)
		{}
		printf("%d\n", chars_in_word);
	}
	printf("%d\n", words);
	return (table);
}

int		main(void)
{
	char **a;

	a = ft_split_whitespaces("     asfa asfa saf af ");
	return(0);
}
