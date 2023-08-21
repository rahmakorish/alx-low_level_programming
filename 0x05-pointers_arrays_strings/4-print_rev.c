#include "main.h"
/**
 * print_rev- prints a string in reverse
 * @s:string to be printed in reverse
 **/
void print_rev(char *s)
{
	int length = 0;
	int i;

	while (*s++ != '\0')
	{
		length++;
	};

	for (i = length; i > -1; i--)
	{
		_putchar (s[i]);
	};
	_putchar('\n');
}
