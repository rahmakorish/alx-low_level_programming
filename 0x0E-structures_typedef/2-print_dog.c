#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog-initialize variable of type struct dog
 * @d:dog variable type
 **/
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		exit(98);
	}
	else
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
