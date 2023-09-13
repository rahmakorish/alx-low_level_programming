#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index-searches for integer
 * @array:array to be printed
 * @size:size of array
 * @cmp:pointer to function
 * Return:index to first element
 **/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, index = -1;

	if (size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size + 1; i++)
	{
		if (cmp(array[i]))
		{
			index = i;
			return (index);
		}
	}
	return (index);
}
