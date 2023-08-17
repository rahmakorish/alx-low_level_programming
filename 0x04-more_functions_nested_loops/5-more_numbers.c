#include <time.h>
#include "main.h"
/**
 * more_numbers-prints the numbers 10 times
 * Return:0success
 **/
void more_numbers(void)
{
	int i = 0;
	int count = 0;

	while (count < 10)
	{
		while (i < 15)
		{
			_putchar("%d", i);
			i++;
		};
		count++;
		_putchar('\n');
	}; 
	_putchar('\n');
}
