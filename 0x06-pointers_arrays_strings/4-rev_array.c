#include "main.h"
#include <string.h>
/*
 * reverse_array-reverses the content of an array
 * @a:array input
 * @n: number of elements in array
 **/
void reverse_array(int *a, int n)/* n =13 index= 12*/
{
	int i, x;
	int temp[n];

	/*iterate over array ascendin*/
	for (i = 0; i < n-1; i++)
	{/*iterate in reverse*/
		for (x = n-1; x > -1; x--)
		{/* a[0] = a[12]*/
			temp[i] = a[x];
		};
	}
}
