#include "main.h"
/**
* print_square-prints a square
* @size:the size of square
**/
void print_square(int size)
{
	int line = 0;
	int symbol = 0;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (size > line)
		{
			while (size > symbol)
			{
				_putchar('#');
				symbol++;
			}
			line++;
			symbol = 0;
			_putchar('\n');
		}
	}
}
