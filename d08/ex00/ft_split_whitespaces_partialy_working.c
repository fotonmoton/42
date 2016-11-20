/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtertysh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 12:42:22 by gtertysh          #+#    #+#             */
/*   Updated: 2016/11/06 13:40:45 by gtertysh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	table_mem(char *string, char ***table)
{
	int		word_exist;
	int		words;

	words = 0;
	while (*string)
	{
		while (*string == ' ' || *string == '\t' || *string == '\n')
			string++;
		word_exist = 0;
		while (*string != ' ' && *string != '\t' && *string != '\n' && *string)
		{
			string++;
			word_exist = 1;
		}
		if (word_exist)
			words++;
	}
	*table = (char **)malloc(sizeof(char *) * (words + 1));
}

int		word_mem(char **table, int word_index, int char_in_word)
{
	table[word_index] = (char *)malloc(sizeof(char) * (char_in_word + 1));
	if (char_in_word != 0)
	{
		return (1);
	}
	else
	{
		table[word_index] = 0;
		return (0);
	}
}

int		count_chars(char **begin, char **word_begin)
{
	int		char_in_word;

	while (**begin == ' ' || **begin == '\t' || **begin == '\n')
		(*begin)++;
	char_in_word = 0;
	*word_begin = *begin;
	while (**begin != ' ' && **begin != '\t' && **begin != '\n' && **begin)
	{
		(*begin)++;
		char_in_word++;
	}
	return (char_in_word);
}

char	**ft_split_whitespaces(char *str)
{
	char	**table;
	int		char_in_word;
	int		word_index;
	int		char_index;
	char	*word_begin;

	word_index = 0;
	char_index = 0;
	table_mem(str, &table);
	while (*str)
	{
		char_in_word = count_chars(&str, &word_begin);
		word_mem(table, word_index, char_in_word);
		char_index = 0;
		while (char_in_word--)
		{
			table[word_index][char_index++] = *word_begin;
			word_begin++;
		}
		table[word_index][char_index] = '\0';
		word_index++;
	}
	return (table);
}

int		main(void)
{
	char **a;
	int i;
	
	i = 0;
	a = ft_split_whitespaces("     asfa asfa saf af ");
	printf("%s\n", a[2]);
	return(0);
}
