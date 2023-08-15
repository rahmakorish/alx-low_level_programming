#include "main.h"
#include <stdio.h>

/**
 *print_to_98-prints digit to98
 *@n:user input
 *Return:digits
 **/
void print_to_98(int n)
{
	while (n < 98)
	{
		puts(n);
		puts(',');
		puts(' ');
		n++;
	}
}
