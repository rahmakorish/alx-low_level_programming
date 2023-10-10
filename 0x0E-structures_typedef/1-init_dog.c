#include "dog.h"
/**
 *init_dog-initialize variable
 *@d:name
 *@name:name
 *@age:age
 *@owner:owner
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
