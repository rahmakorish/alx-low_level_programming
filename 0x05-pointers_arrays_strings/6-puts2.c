#include "main.h"
#include <string.h>
/**
 * puts2-prints every other character of a string
 * @str:string to be printed
 **/
void puts2(char *str)
{
	int i;
	int len = strlen(str);

	for (i = 0; i < len; i++)
	{
		if (i % 2 == 0)
		_putchar(str[i]);
		else
		continue;
	};
	_putchar('\n');
}
