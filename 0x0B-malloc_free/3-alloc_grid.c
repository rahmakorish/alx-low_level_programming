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

	arr = malloc(sizeof(int) * height);
	for (coloumn = 0; coloumn < height; coloumn++)
	{
		arr[coloumn] = malloc(sizeof(int) * width);
	}
	return (arr);
}
