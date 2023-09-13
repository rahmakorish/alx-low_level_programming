#include "main.h"

/**
 *print_triangle-prints a triangle followed by new line
 *@size:the size of triangle
 **/
void print_triangle(int size)
{
/**	int symbol;9 space 1 symbol  space = size - symbol 
		     **8 space 2symbol**/
	int space = size, symbol = 1;
/**
	for (space = size; space > 0; space--)
	{
		
		for(symbol = 1; symbol < size; symbol++)
		{
			_putchar(' ');
			_putchar('#');
		};
		_putchar('\n');
	}

}**/
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (space >= size - symbol)
		{
			_putchar(' ');
			while (symbol < size)
			{
				_putchar('#');
			}
			symbol++;
			space--;
			_putchar('\n');
			
		}

	}
}
