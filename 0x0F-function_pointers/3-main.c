#include "function_pointers.h"
#include <stdio.h>
/**
 *main-start point
 *@argv:argument vector
 *@argc:argument count
 *Return:0success
 **/
int main(int argc, int *argv[])
{
	int num1, num2, op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op = argv[2];
	
	op_func = get_op_func(op);
	if (!op_func)
	{
		printf("Error\n");
		exit(99);
	}
return (0);
}
