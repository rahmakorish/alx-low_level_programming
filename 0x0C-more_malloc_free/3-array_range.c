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
	int count = 0, i = min, x, n;

	if (min > max)
	{return (NULL);
	}
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
	{
		for (n = min; n <= max; n++)
		{
		for (x = 0; x < count; x++)
		{arr[x] = n;
		n++;
		}
		}
	}
	return (arr);
}
