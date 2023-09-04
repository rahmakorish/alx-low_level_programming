#include "main.h"
#include <stdlib.h>
/**
 * create_array- creates an array of char and initial character
 * @size: size of array
 * @c: specific character
 * Return: pointer to array or NULL if it fails
 **/
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		p =  malloc(size * sizeof(char));
		while (i < size)
		{
		p[i] = c;
		i++;
		}
		if ( p == NULL)
		{
			return (NULL);
		}
	}
	return (p);
}
