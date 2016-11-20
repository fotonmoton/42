/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtertysh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 12:42:22 by gtertysh          #+#    #+#             */
/*   Updated: 2016/11/08 12:01:19 by gtertysh         ###   ########.fr       */
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
	int		char_position;

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
	word_position = 0;
	while (*str)
	{
		while (*str == ' ' || *str == '\t' || *str == '\n')
			str++;
		chars_in_word = 0;
		while (*str != ' ' && *str != '\t' && *str != '\n' && *str)
		{
			str++;
			chars_in_word++;
		}
		table[word_position] = (char *)malloc(sizeof(char) * (chars_in_word + 1));
		if (!chars_in_word)
			break;
		char_position = 0;
		while (chars_in_word)
		{
			table[word_position][char_position] = *(str - chars_in_word);
			chars_in_word--;
			char_position++;
		}
		table[word_position][char_position] = '\0';
		word_position++;
	}
	printf("%d\n", word_position);
	table[word_position] = 0;
	return (table);
}

int		main(int argc, char **argv)
{
	char	**a;
	int		i;

	i = 0;
	//a = ft_split_whitespaces(argv[1]);
	a = ft_split_whitespaces("a1 234 ");
	while (a[i])
	{
		printf("%s\n", a[i++]);
	}
	return(0);
}
