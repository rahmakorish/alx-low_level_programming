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
	const char *string;

	va_start(arg, n);
	/*string = va_arg(arg, const char *);*/
	while (i != 0)
	{
		string = va_arg(arg, const char *);
		if (string != NULL)
		{
		printf("%s ", string);
		if ((separator != NULL) && (i > 1))
		printf("%s", separator);
		}
		else if (string == NULL)
		{
			printf("nil");
		}
		i--;
	}
	printf("\n");
	va_end(arg);

}
