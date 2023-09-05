#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * alloc_grid - return pointer to 2 dimensional array
 * @width: first index of arraay
 * @height: second index of array
 * Return: pointer to array
 **/
int **alloc_grid(int width, int height)
{
	int **pe;
	int raw_index = 0, h, i;

	if (width == 0 || height == 0)
	{
		return (NULL);
	}

	pe = malloc(height * sizeof(int));
	if (pe == NULL)
	{
		return (NULL);
	}
	else
	{
		while (raw_index < height)
		{
			pe[raw_index] = malloc(width * sizeof(int));
			raw_index++;
		} return(pe);
	}
	for (i = 0, h = 0; i < width && h < height; i++, h++)
	{
		pe[h][i]= 0;
	};
	free(pe);
	return(0);
}