#include "main.h"
#include <string.h>
/**
 *reverse_array-reverses the content of an array
 *@a:array input
 *@n: number of elements in array
 **/
void reverse_array(int *a, int n)/* n =13 index= 12*/
{
	int i = 0, x = n - 1;

	while (i < n - 1)
	{
		while (x > -1)
		{
			a[i] = a[x];
			i++;
			x--;
			break;
		}
	}
}
