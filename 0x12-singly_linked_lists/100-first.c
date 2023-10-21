#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
void _constructor(void) __attribute__((constructor));
/**
 * _constructor-prints You're beat! and yet, you must all
 * Return:0success
 **/
void _constructor(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
