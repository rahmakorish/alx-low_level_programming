#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
/**
 *_strlen-measure length of constant
 * @con:given const
 *Return:length of input
 **/
int _strlen(const char *con)
{
	int len = 0;

	while (*con)
	{len += 1;
	con++;
	}
	return (len);
}
/**
 * print_all-prints strings
 * @format:inputted nums
 * Return:0success
 **/
void print_all(const char * const format, ...)
{va_list arg;
char *input;
int i = 0, num;

	va_start(arg, format);
	while (format && format[i])
	{
		while (i < (_strlen(format)))
		{
			switch (format[i])
			{case 's':
				input = va_arg(arg, char*);
				/*if (!input)
				{printf("(nil)");
				break;
				}*/
				printf("%s", input);
				break;
				case 'i':
				num = va_arg(arg, int);
				printf("%i", num);
				break;
				case'f':
				printf("%f", va_arg(arg, double));
				break;
				case 'c':
				printf("%c", va_arg(arg, int));
				break;
				break;
				default:
				break;
			}
			i++;
			if (i == _strlen(format))
			{break;
			}
			printf(", ");
			}}
	printf("\n");
}
