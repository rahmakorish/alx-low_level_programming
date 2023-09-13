#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator-prints array
 * @array:array to be printed
 * @action:pointer to function
 * @size:size of array
 * Return:0success
 **/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if(array == NULL || size == 0)
	{	exit(98);}

	while (i < size)
	{
	action(array[i]);
	i++;
	}
}
