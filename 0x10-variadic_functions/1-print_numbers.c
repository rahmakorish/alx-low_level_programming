#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers-prints numbers
 * @separator:string to separate nums
 * @n:nums
 * Return:0success
 **/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i = n;

	va_start(arg, n);
	while (i != 0)
	{
		if (separator == NULL)
		{printf("%i ", va_arg(arg, int));
		i--;
		}
		else if (separator != NULL)
		{printf("%i%s", va_arg(arg, int), separator);
		i--;
		}
	}
	printf("\n");
	va_end(arg);
}
