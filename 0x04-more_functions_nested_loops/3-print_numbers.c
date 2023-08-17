#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*print_numbers-prints the numbers from 0 to 9
*Return:0succes
**/
void print_numbers(void)
{
	for (int i = 48; i < 58; i++)
	{
		_putchar("%c", i);
	}
	_putchar(' ');
}
