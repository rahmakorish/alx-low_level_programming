#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main-entry point
 * @argv:argument vector
 * @argc:argument count
 * Return:0success
 **/
int main(int argc, char *argv[])
{
	int number_of_bytes;

	if (argc < 2)
	{
		printf("Error\n");
		exit(1);
	}
	number_of_bytes = atoi(argv[1]);
	if (number_of_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
}
