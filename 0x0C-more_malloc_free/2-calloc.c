#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 *_calloc-allocates memory for an array
 *@nmemb:number of elemeents
 *@size:size of elements
 *Return:pointer to allocated memory
 **/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{return (NULL);
	}
	arr = malloc(size * nmemb);
	if (arr == NULL)
	{free(arr);
	return (NULL);
	}
	else
	{
		for (i = 0; i < nmemb; i++)
		{arr[i] = 0;
		}
	}
		return (arr);
}
