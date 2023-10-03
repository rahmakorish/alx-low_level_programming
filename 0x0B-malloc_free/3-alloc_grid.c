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
	int **arr, line;

	if (width <= 0 | height <= 0)
	return (NULL);
	arr = malloc(sizeof(int) * (height));
	if (arr == NULL)
	return (NULL);
	else
	{
	arr[line] = malloc(sizeof(int) * width);
	}
}
