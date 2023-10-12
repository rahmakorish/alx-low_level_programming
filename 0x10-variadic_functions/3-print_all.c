#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * print_all-prints strings
 * @format:inputted nums
 * Return:0success
 **/
void print_all(const char * const format, ...)
{const char *i = format;
	va_list arg;
	const char *input;
	int count = 0;

	va_start(arg, format);
/*	printf("%s\n",i);*/

	while (*i++)
	{
		count += 1;
		/*printf("%s\n",format);*/
	/*input = va_arg(arg, const char *);*/
	(void)input;
	}
	printf("%s\n", format);
	/*printf("%d\n",count);*/
}
