#include "main.h"
#include <stdlib.h>
/**
 *_realloc-reallocates memory block
 *@ptr:pointer to previous memory
 *@old_size:space of ptr
 *@new_size:new size of the new memory allocated
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
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size > old_size)
	{
		ptr = malloc(old_size + (old_size - new_size));
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
