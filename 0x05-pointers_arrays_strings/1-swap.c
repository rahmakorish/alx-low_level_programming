#include "main.h"
/**
 *swap_int-swaps the value of two integers
 *@a:first integer
 *@b:second intger
 **/
void swap_int(int *a, int *b)/** a =10 b =20*/
{
	
	int x = *a ;/* x = 10*/
	a = b;
	b = x;	/* b = x =10*/
}
