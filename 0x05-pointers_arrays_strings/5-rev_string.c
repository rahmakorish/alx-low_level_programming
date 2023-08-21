#include "main.h"
#include <string.h>
/**
 * rev_string-reverse a string
 * @s:string to be reversed
 **/
void rev_string(char *s)
{
	int i;

	for(i = strlen(s) - 1; i > -1; i--)
	{
		_putchar(s[i]);
	};
	_putchar('\n');
}	
