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
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (0);
}
