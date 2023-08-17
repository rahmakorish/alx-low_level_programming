#include "main.h"

/**
 *print_triangle-prints a triangle followed by new line
 *@size:the size of triangle
 **/
void print_triangle(int size)
{
	int symbol = 0;
	int space = size;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (space >= 0)
		{
			_putchar(' ');
			while ( symbol < size)
			{
				_putchar('#');
				symbol++;
				/*_putchar('\n');*/
			};
			putchar('\n');
			space--;
		}
	};
}
