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
{/*unsigned int i = n;*/
	va_list arg;
	int input;

	va_start(arg, format);
	input = va_arg(arg, int);
	(void)input;
}
