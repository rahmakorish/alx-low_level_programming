#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog-creates a new dog
 * @name:string
 * @age:number
 * @owner:name
 * Return:new object
 **/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dogt;

	dogt = malloc(sizeof(dog_t));
	if (dogt == NULL)
	{
	return (NULL);
	}
	name = malloc(sizeof(name));
	if (name == NULL)
	{return (NULL);
	}
	owner = malloc(sizeof(owner));
	if (owner == NULL)
	{return (NULL);
	}
	dogt->name = name;
	dogt->age = age;
	dogt->owner = owner;
	return (dogt);
}
