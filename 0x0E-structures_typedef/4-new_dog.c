#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
	dogt->name = malloc(strlen(name) + 1);
	if (dogt->name == NULL)
	{
		free(dogt);
		return (NULL);
	}
	dogt->owner = malloc(strlen(owner) + 1);
	if (dogt->owner == NULL)
	{
		free(dogt);
		return (NULL);
	}
	strcpy(dogt->name, name);
	dogt->name = name;
	dogt->age = age;
	dogt->owner = owner;
	return (dogt);
}
