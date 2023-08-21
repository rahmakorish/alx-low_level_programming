#include "main.h"
#include <string.h>
/**
 * puts2-prints every other character of a string
 * @str:string to be printed
 **/
void puts2(char *str)
{
	int i = 0;

	do
	{
		if (i % 2 == 0)
		_putchar(str[i]);
		i++;
	}
	while(*str++ != '\0');
	_putchar('\n');
}
