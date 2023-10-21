#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strtlen-measure length of constant
 * @con:given const
 * Return:length of input
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
{      
	va_list arg;
	char *input;
	const char *str = format;
	int i = 0, num;
	float num1;

	va_start(arg, format);
	while (format && format[i])
	{while (i < (_strlen(format)))
		{switch (str[i])
			{case 's':
				input = va_arg(arg, char*);
				printf ("%s", input);
				break;
				case 'i':
				num = va_arg(arg, int);
				printf("%i", num);
				break;
				case'f':
				num1 = va_arg(arg, double);
				printf("%f", num1);
				break;
				case 'c':
				printf ("%c", va_arg(arg, int));
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
			}
		}
	
	printf("\n");
}
