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
int main(int argc, char *argv[])
{

	int input;

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	else if (argc == 2)
	{
		input = atoi(argv[1]);
		if (input < 0)
		{
			printf("0\n");
		}
		else
		{
			printf("%d\n", input);
		}
	}
	return (0);
}
