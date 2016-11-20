// C/C++ File
// AUTHOR:   foton
// FILE:     brainfuck.c
// ROLE:     to rule them all
// CREATED:  2016-11-19 22:28:26
// MODIFIED: 2016-11-20 01:13:18
// TODO:	 nested loops
// 			 read user input
// 			 handle errors (incorrect source)
// 			 read from file and stdin

#include <stdlib.h>
#include "brnfck.h"

int		brainfuck(char *source)
{
	char 	*array;
	int		i;
	int		head;
	int		start_loop;

	i = 0;
	array = malloc(sizeof(char) * SIZE);
	while (i < SIZE)
		array[i++] = 0;
	i = 0;
	head = 0;
	start_loop = 0;
	while (source[i])
	{
		if (source[i] == '+')
			array[head]++;
		if (source[i] == '-')
			array[head]--;
		if (source[i] == '>')
			head++;
		if (source[i] == '<')
			head--;
		if (source[i] == '.')
			my_putchar(array[head]);
		if (source[i] == '[')
			start_loop = i;
		if (source[i] == ']')
		{
			if (!(array[head] == 0))
				i = start_loop - 1;
		}
		i++;
	}
	free(array);
	return (0);
}
