#include "main.h"
#include <string.h>
/**
 * _print_rev_recursion-print string in reverse
 * @s: atring to be printed
 **/
void _print_rev_recursion(char *s)
{
	int count = strlen(s);

	if (count > 0)
	{
		_putchar(s[count]);
		count++;
		_print_rev_recursion(s);
	}

	else
	{
		_putchar(s[0]);
	}
}



/**	if (*s=='\0')
	{
		_putchar(*s++);
		s++;
		_print_rev_recursion(s);
	}
	else
	{
		_putchar('\n');
	}
}**/
