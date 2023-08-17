#include "main.h"
/**
*print_diagona-draws adiagonal line
*@n:the number of times the character \ printed
**/
void print_diagonal(int n)
{
	int x = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (x < n)
		{	
			_putchar(' ');
			_putchar('\\');
			
			x++;
		};
	};
	_putchar('\n');
}
