#include <time.h>
#include "main.h"
/**
 * more_numbers-prints the numbers 10 times
 * Return:0success
 **/
void more_numbers(void)
{
	int i = 48;
	int x = 48;
	int count = 0;

	while (count <= 10)
	{
		while (i < 58)
		{
			if (i == 57)
			{
				while (x < 53)
				{
					_putchar(49);
					_putchar(x);
					x++;
				};
			}
			else
			{
			_putchar(i);
			i++;}
			/*count++;*/
		};
		_putchar('\n');
		count++;
	}; 
	_putchar('\n');
}
