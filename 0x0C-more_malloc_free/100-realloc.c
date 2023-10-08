#include "main.h"
#include <stdlib.h>
/**
 *callo-allocates memory block
 *@ptr:pointer to previous memory
 *@size:space of ptr
 *Return:0success
 **/
void *callo(char *ptr, unsigned int size)
{
	ptr = malloc(size * sizeof(ptr));
	if (ptr == NULL)
	{
		return (NULL);
	}
	return (ptr);
}
/**
 *_realloc-reallocates memory block
 *@ptr:pointer to previous memory
 *@old_size:space of ptr
 *@new_size:new size of the new memory allocated
 *Return:0success
 **/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0)
	{free(ptr);
	return (NULL);
	}
	if (new_size > old_size)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
		{return (NULL);
		}
	}
	if (new_size == old_size)
	{
		return (callo(ptr, new_size));
	}
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
	}
	return (ptr);
}
