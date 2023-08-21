#include "main.h"
#include <string.h>
/**
 * puts2-prints every other character of a string
 * @str:string to be printed
 **/
void puts2(char *str)
{
	int i;
/*	int length = strlen(str);
	_putchar(length); */

	while (*str++ != '\0')
	{ 
		
			_putchar(str[i]);
			i+=2;
		
			
	};
	_putchar('\n');
}
