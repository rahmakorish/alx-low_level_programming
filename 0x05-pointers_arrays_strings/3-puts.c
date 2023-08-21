#include "main.h"
/**
 * _puts-prints a string followed by new line
 * @str:strring to be printed
 **/
void _puts(char *str)
{
	do
	{
		_putchar(*str);
	
	}
	while (*str++ != '\0');
	/*_putchar('\n');*/
}
