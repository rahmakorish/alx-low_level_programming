#include "main.h"
#include <string.h>
/**
 * puts2-prints every other character of a string
 * @str:string to be printed
 **/
void puts2(char *str)
{
	int i;

	while (*str++ != '\0')
	{
		_putchar(str[i]);
		i++;
	};
	_putchar('\n');
}
