#include "main.h"
#include <stdlib.h>
/**
 *array_range-creates array of integers
 *@min:start of array
 *@max:end of array
 *Return:pointer to allocated memory
 **/
int *array_range(int min, int max)
{
	int *arr;
	int count = 0,i = min,x;

	if (min > max)
	return (NULL);
	while (i <= max)
	{
		count++;
		i++;
	}
	arr = malloc(sizeof(int) * count);
	if (arr == NULL)
	{free(arr);
	return (NULL);
	}
	else
	{for (x = 0; x <= count; x++)
		arr[x] = min;
	}
	return (arr);
}
