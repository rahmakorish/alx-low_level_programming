#include "main.h"
#include <stdlib.h>
/**_realloc-reallocates memory block
 * @ptr:pointer to previous memory
 * @old_size:space of ptr
 * @new_size:new size of the new memory allocated
 * Return:0success
 **/
void *callo(char *ptr, unsigned int size)
{
	ptr = malloc(size * sizeof(ptr));
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	return (ptr);
}
