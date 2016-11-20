// C/C++ File
// AUTHOR:   foton
// FILE:     output.c
// ROLE:     to rule them all
// CREATED:  2016-11-19 22:28:26
// MODIFIED: 2016-11-20 00:51:42

#include <unistd.h>

void	my_putstr(char *str)
{
	while (*str)
			write(1, str++, 1);
}

void	my_putchar(char c)
{
	write(1, &c, 1);
}
