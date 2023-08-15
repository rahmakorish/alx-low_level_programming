#include "main.h"
/**
 *print_last_digit-return last digit of user input
 *@x:user input to check
 *Return:digit of input
 **/
int print_last_digit(int x)
{
	int y = x % 10;

	_putchar(x);
	return (y);
}
