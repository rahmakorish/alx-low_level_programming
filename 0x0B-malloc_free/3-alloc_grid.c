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
	int **arr, line_index,i,x;

	if (width <= 0 || height <= 0)
	return (NULL);
	arr = malloc(sizeof(int) * (height));
	if (arr == NULL)
	return (NULL);
	else
	{
		for(line_index = 0; line_index < height; line_index++)
		{
			arr[line_index] = malloc(sizeof(int) * width);
	if(arr[line_index] == NULL)
	{free(arr[line_index]);
	free(arr);
	return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		for (x = 0; x < width; x++)
		arr[i][x] = 0;
	}
		}
	return (arr);
	}
}
