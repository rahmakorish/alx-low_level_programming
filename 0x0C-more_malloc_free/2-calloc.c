#include "main.h"
#include <stdlib.h>
/**
 *_calloc-allocate memory for array
 *@nmemb:number of array elements
 *@size:size of element type
 *Return:pointer to new array
 **/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	p = malloc(size * nmemb);
	if (p == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < (nmemb * sizeof(int)); i++)
		{
			p[i] = 0;
			return (p);
		}
	}
	free(p);
	exit(0);
}
