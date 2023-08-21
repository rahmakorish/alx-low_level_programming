#include "main.h"
/**
 * _puts-prints a string followed by new line
 * @str:strring to be printed
 **/
void _puts(char *str)
{
	/*_putchar(*str);*/
	if (*str++ != '\0')
	{
		_putchar(*str);
	}
	_putchar('\n');
}
