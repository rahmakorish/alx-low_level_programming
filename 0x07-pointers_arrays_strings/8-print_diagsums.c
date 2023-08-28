#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>
/**
 * print_diagsums-prints the sum of the two diagonals of square matrix
 * @a : matrix array
 * @size : size of array
 **/
void print_diagsums(int *a, int size)
{
	long d1 = 0, d2 = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		d1 += a[i];
		d2 += a[size - i - 1];
		a += size;
	}
	printf("%ld, %ld\n", d1, d2);
}
