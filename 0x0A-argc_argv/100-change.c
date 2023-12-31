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
	int cents[] = {25, 10, 5, 2, 1};
	int i, output;
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
			for (i = 0; i < 4; i++)
		{
			if (input % cents[i] == 0)
			{
				output = input / cents[i];
				printf("%d\n", output);
				break;
			}
		}
			/*printf("%d\n", input);*/
		}
	}
	return (0);
}
