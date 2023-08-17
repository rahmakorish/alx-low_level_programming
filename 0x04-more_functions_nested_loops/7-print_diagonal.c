#include "main.h"
/**
*print_diagona-draws adiagonal line
*@n:the number of times the character \ printed
**/
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{	
		_putchar('\\');
	};
	_putchar('\n');
}
