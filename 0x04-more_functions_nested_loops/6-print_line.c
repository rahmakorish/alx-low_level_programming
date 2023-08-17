#include "main.h"
/*
 *print_line-prints a straight line in terminal
 *@n:number of times the character _ should be printed
 * Return:0success
 */
void print_line(int n)
{
	int i = 0;

	if (i == n)
	{
		_putchar('\n');
	}
	else
	{
		while (i < n)
		{
			_putchar('_');
			i++;
		};
	};
	_putchar('\n');
}
