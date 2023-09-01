#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
 *main-prints sum of positive numbers
 *@argc:number of argument count
 *@argv:vector of commandline argument
 *Return:sum of inputted numbers
 **/
int __attribute__ ((unused)) main(int argc, char *argv[])
{
	int i, sum = 0, num;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
	for (i = 1; i < argc; i++)
	{
		num = atoi(argv[i]);
		if (!isdigit(num))
		{
			printf("Error\n");
			break;
		}
		else if (isdigit(num))
		{
			sum += num;
			printf("%d\n", sum);
		}
	}
	}
	return (0);
}
