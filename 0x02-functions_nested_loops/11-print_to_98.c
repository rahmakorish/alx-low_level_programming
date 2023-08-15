#include "main.h"
#include <stdio.h>

/**
 *print_to_98-prints digit to98
 *@n:user input
 *Return:digits
 **/
void print_to_98(int n)
{
	if (n != 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
		if (n == 98)
		{
			printf("98\n");
		};
	}
	else
	{
		printf("%d\n", n);
	}
}
