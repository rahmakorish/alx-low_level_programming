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

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op = argv[2];
	if (op == '+')
	{
		op_add(num1, num2);
	}
}
