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
	int coloumn;
	int **arr;

	if (width <= 0 || height <= 0)
	return (NULL);
	arr = malloc(sizeof(*arr) * height);
	if (arr == NULL)
	{return (NULL);
	}
	for (coloumn = 0; coloumn < height; coloumn++)
	{
		arr[coloumn] = malloc(sizeof(**arr) * width);
		if (arr[coloumn] == NULL)
		{return (NULL);
		}
	}
	return (arr);
}
