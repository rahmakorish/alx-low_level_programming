#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * init_dog-initialize variable of type struct dog
 * @d:dog variable type
 * @name:dog's name
 * @age:number age
 * @owner:dog's owner
 * Return:init_dog struct type
 **/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
