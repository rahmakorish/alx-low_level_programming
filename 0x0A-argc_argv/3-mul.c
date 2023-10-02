#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *main-prints the number of arguments passed into it
 *@argc:number of argument count
 *@argv:vector of commandline argument
 *Return:product of 2 inputted numbers
 **/
int __attribute__ ((unused)) main(int argc, char *argv[])
{
	 int a, b, c;

	if (argc == 3)
	{
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	c = a * b;
	printf("%d\n", c);
	return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
