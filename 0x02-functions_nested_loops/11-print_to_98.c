#include "main.h"
#include <stdio.h>

/**
 *print_to_98-prints digit to98
 *@n:user input
 *Return:digits
 **/
void print_to_98(int n)
{
	while (n < 99)
	{
		if (n == 98)
		{
			printf("%d", n);
		}
		else
		{
			printf("%d, ", n);
			n++;
		}
	}
	while (n > 97)
	{
		if (n == 98)
		{
			printf("%d", n);
		}
		else
		{
			printf("%d, ", n);
			n--;
		}
	}
}