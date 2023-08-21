#include "main.h"
/**
 * rev_string-reverse a string
 * @s:string to be reversed
 **/
void rev_string(char *s)
{
	int length = 0;
	int i;

	while (*s++ != '\0')
	{
		length++;
	};
	for(i = length; i > -1; i--)
	{
		_putchar(s[i]);
	};
	_putchar('\n');
}	
