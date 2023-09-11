#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog-initialize variable of type struct dog
 * @d:dog variable type
 **/
void print_dog(struct dog *d)
{
	printf("Name: %s\n", d->name ? d->name : "(nil)");
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
