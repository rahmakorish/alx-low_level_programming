#include "main.h"
#include <string.h>
/**
 * puts_half-prints half of a string
 * @str:input string to be printed
 **/
void puts_half(char *str)
{
	int length = strlen(str);
	int n;

	if (length % 2 == 0)
	{
		for (n = length / 2; n <= length - 1; n++)
		{
			_putchar(str[n]);
		};
	}
	else
	{
		for (n = ((length - 1) / 2); n < length; n++)
		{
			_putchar(str[n-1]);
		};
	};
	_putchar('\n');
}
