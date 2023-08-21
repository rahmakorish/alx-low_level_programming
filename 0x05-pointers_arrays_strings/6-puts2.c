#include "main.h"
/**
 * puts2-prints every other character of a string
 * @str:string to be printed
 **/
void puts2(char *str)
{
	int length = 0;
	while (*str++ != '\0')
	{ 
		length++;
	};
	_putchar(length);
}
