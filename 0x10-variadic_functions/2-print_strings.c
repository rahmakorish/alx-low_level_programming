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
char *convert_int_to_string(va_list arg) {
  int value = va_arg(arg, int);

  char *buffer = malloc(10);
  if (buffer == NULL) {
    return NULL;
  }

  sprintf(buffer, "%d", value);

  return buffer;
}

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = n;
	va_list arg;

	va_start(arg, n);
	while (i != 0)
	{
		if ((va_arg(arg, int)))
		{
			convert_int_to_string(arg);
			printf("%i%s",va_arg(arg, int),separator);
		i--;
		}
		(void)separator;
	}
	printf("\n");
	va_end(arg);
}
