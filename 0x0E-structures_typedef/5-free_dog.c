#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *free_dog-frees dog atruct
 *@d:inputted struct
 *Return:0success
 **/
void free_dog(dog_t *d)
{
	if (d == NULL)
	{free(d);
	}
}
