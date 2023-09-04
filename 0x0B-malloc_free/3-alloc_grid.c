#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * alloc_grid - return pointer to 2 dimensional array
 * @width: first index of arraay
 * @height: second index of array
 * Return: pointer to array
 **/
int **alloc_grid(int width, int height)
{
	int **pi, **pe;

	if (width == 0 || height == 0)
	{ return (NULL);}
	/* size of internal array (width)*/
	/* size of external array(height)*/
	pe =malloc(width * sizeof(int));
	pi = malloc(height * sizeof(int));
	printf("pe: %d\n",**pe);
	printf("pi: %d\n",**pi);
	return(0);
}
