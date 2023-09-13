#include "function_pointers.h"
#include <stdlib.h>
/**
 *op_add-sum of a and b
 *@a:first int
 *@b:second int
 *Return:sun of a and b
 **/
int op_add(int a, int b)
{
	int sum = atoi(a) + atoi(b);
	return (sum);
}
