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
{const char *i = format;
	va_list arg;
	char *input;

	va_start(arg, format);
	while (*i != '\0')
	{
		printf("%s", (input = va_arg(arg, char*)));
	break;
	}
	printf("\n");
}
