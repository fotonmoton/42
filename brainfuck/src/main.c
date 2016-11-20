// C/C++ File
// AUTHOR:   foton
// FILE:     main.c
// ROLE:     to rule them all
// CREATED:  2016-11-19 22:28:26
// MODIFIED: 2016-11-20 01:15:58

#include "brnfck.h"

int		main(int argc, char **argv)
{
	if (argc < 2)
	{
		my_putstr("Dude, put some source to work with!\n");
		return (0);
	}
	if (brainfuck(argv[1]) == 1)
	{
		my_putstr("Something goes wrong :(\n");
		return (1);
	}
	return (0);
}
