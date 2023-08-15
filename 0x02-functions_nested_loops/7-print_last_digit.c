#include "main.h"
/**
 *print_last_digit-return last digit of user input
 *@x:user input to check
 *Return:digit of input
 **/
int print_last_digit(long int x)
{
	int y = x % 10;

	if (x > 0 )
	{
		_putchar("%ld", y);
		return (x % 10);
	}
	else
	{
		putchar("%ld", y);
		return (x % 10);
	}
}
