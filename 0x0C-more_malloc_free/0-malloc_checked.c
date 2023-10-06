#include "main.h"
#include <stdlib.h>
/**
 *malloc_checked-allocate memory
 *@b:size needed
 *Return:pointer to allocated memory
 **/
void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(b);
	if (p == NULL)
	{
		free(p);
		exit(98);
	}
	return (p);
}
