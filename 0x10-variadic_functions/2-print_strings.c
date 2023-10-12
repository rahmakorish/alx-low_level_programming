#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * print_strings-prints strings
 * @separator:string to be printed between strings
 * @n:inputted nums
 * Return:0success
 **/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = n;
	va_list arg;

	va_start(arg, n);
	while (i != 0)
	{
		if ((va_arg(arg, const char *)))
		{printf("%s ", va_arg(arg, const char *));
		i--;
		}
		if ((separator != NULL) && (i > 1))
		{
		printf("%s", separator);
		i--;
		}
		
	
		if (!(va_arg(arg, const char *)))
		{
			printf("nil");
		}
	}
	printf("\n");
	va_end(arg);

}
