#include "main.h"
#include <stdlib.h>
/**
 *create_array-creates array of chars
 *@size:size of array
 *@c:initial character
 *Return:0 success
 **/
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
	return (NULL);
	else
	{
		arr = malloc(sizeof(char) * size);
		for (i = 0; i < size; i++)
		{
			arr[i] = c;
		}
	}
	return (arr);
	free(arr);
}
