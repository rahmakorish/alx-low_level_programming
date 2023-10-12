#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <ctype.h>
/**
 * print_strings-prints strings
 * @separator:string to be printed between strings
 * @n:inputted nums
 * Return:0success
 **/
void print_strings(const char *separator, const unsigned int n, ...)
{
	const unsigned int i = n;
	va_list arg;

	va_start(arg, n);
	while (i != 0)
	{
		if (separator == NULL)
		{printf("%i ", va_arg(arg, int));
		i--;
		}
		if (isalpha(va_arg(arg, int)))
		{printf("%i%s",va_arg(arg, int),separator);
		i--;}
	}
	printf("\n");
	va_end(arg);
}
