#include <time.h>
#include <stdio.h>
/**
 *  print_most_numbers-prints the numbers from 0 to 9
 * *Return:0succes
 **/
void print_most_numbers(void)
{
	while (i < 10)
	{
		if (i == 2 || i == 4)
		{
		       	break; 
		}
		else
		{
			_putchar(i);
		};
	}
	_putchar(' ');
}
