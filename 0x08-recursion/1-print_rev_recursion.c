#include "main.h"
#include <string.h>
/**
 * _print_rev_recursion-print string in reverse
 * @s: atring to be printed
 **/
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		s++;
		_print_rev_recursion(s);
	}
	else
	{
		_putchar('\n');
	}
}
