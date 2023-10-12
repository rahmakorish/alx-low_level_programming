#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
/**
 * print_all-prints strings
 * @format:inputted nums
 * Return:0success
 **/
void print_all(const char * const format, ...)
{/*const char *i = format;*/
	va_list arg;
	unsigned int x = 0;
	const char *input = format;

	va_start(arg, format);
	while (va_arg(arg, const char *) != NULL)
	{
	while (x < strlen(input))
	{
	if (isdigit(input[x]))
	{x++;
	}
	if (!isdigit(input[x]))
	{x++;
	}
	}}
	printf("%s\n", format);
}
