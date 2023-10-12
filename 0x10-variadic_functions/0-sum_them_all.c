#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all-return sum of all parameters
 * @n:input num
 * Return:sum of intgers
 **/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0, i = n;
	va_list arg;

	va_start(arg, n);
	while (i != 0)
	{
		sum += va_arg(arg, int);
		i--;
	}
	va_end(arg);
	return (sum);
}
