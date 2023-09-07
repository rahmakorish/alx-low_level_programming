#include "main.h"
#include <stdlib.h>
/**
 *malloc_checked-allocate memory using malloc
 *@b:size required
 **/
void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	else
	{
		return (p);
		exit(98);
	}
}
