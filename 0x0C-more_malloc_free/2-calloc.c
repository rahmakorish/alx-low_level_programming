#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 *_calloc-allocate memory for array
 *@nmemb:number of array elements
 *@size:size of element type
 *Return:pointer to new array
 **/
char *setarray(char *ptr, char c, unsigned int x);
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

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
		setarray(p, 0, nmemb * sizeof(int));
	}
	return (p);
	exit(0);
}
/**
 *setarray-initalize array to zero
 *@ptr:pointer
 *@c:character to fill
 *@x:sizeof array
 *Return: pointer to zero array
 **/
char *setarray(char *ptr, char c, unsigned int x)
{
	while(x--)
	{
		*ptr++ = c;
	}
	return (ptr);
}
