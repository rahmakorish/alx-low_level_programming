#include "main.h"
/**
 *swap_int-swaps the value of two integers
 *@a:first integer
 *@b:second intger
 **/
void swap_int(int *a, int *b)
{
	int x;

	x = *b;
	*b = *a;
	*a = x;
}
