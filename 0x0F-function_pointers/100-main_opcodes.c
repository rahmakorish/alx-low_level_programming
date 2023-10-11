#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * main-entry point
 * @argv:argument vector
 * @argc:argument count
 * Return:0success
 **/
int main(int argc, char *argv[])
{
	int number_of_bytes, i;
	unsigned char *list;

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
	list = malloc(number_of_bytes);
	if (list == NULL)
	{exit(98);
	}
	memcpy(list, main, number_of_bytes);
	for (i = 0 ; i < number_of_bytes; i++)
	{
		printf("%02x", list[i]);
	}
	printf("\n");
	return (0);
}
