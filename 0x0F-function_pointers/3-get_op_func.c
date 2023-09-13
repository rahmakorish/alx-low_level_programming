#include "function_pointers.h"
#include <stdlib.h>
/**
 * get_op_func-selects correct function
 * @s:operator passed to program
 * Return:pointer to required function
 **/
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod};
	{NULL, NULL}};
	int i;
}
