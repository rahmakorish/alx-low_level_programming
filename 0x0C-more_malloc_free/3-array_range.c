#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * array_range-creates an array of integers
 * @min:least value in array
 * @max:largrest value in array
 * Return:pointer to created array
 **/
int *array_range(int min, int max)
{
	int *p;
	int count, i = 0;

	if (min > max)
	{ 
		return (NULL);
	}
	for (count = min; count < max; count++)
	{
		count++;
	}
	p = malloc(count * sizeof(int));
	if (p == NULL)
	{
		return (NULL);
	}
	else
	{
		for(i = 0; i < count; i++)
		{
			while(min < max)
			{
			p[i] = min;
			min++;
			}
		}
		return(p);
	}
free(p);
exit(0);
}
