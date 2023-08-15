#include "main.h"
/**
 *print_sign-check user input
 *@n:userinput to check
 *Return:1if positivee
 *0if zero
 *-1if negative
 **/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
