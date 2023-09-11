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
	dog_t dogt;

	dogt.name = name;
	dogt.age = age;
	dogt.owner = owner;
	return(0);
}
