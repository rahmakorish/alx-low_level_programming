#include "main.h"

/**
 *print_triangle-prints a triangle followed by new line
 *@size:the size of triangle
 **/
void print_triangle(int size)
{
	int symbol = 0;
	int space = size;

	while (space != 0)
	{
		_putchar(' ');
		while ( symbol < size)
		{
			_putchar('#');
			symbol++;
		};
		space--;
	}
}
