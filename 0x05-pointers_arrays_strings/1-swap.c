#include "main.h"
/**
 *swap_int-swaps the value of two integers
 *@a:first integer
 *@b:second intger
 **/
void swap_int(int *a, int *b)/** a =10 b =20*/
{
	int *x;  ;/* x = 10*/
	x = b;
	b = a;
	a = x;
}
