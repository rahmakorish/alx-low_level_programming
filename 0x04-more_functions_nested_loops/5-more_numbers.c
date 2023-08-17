#include "main.h"
/**
 * more_numbers-prints the numbers 10 times
 * Return:0success
 **/
void more_numbers(void)
{
	int i = 48;
	/*int x = 48;*/
	int line = 0;

	while (line <= 10)
	{
		while (i <= 57 )
		{
			_putchar(i);
			i++;
		};
		_putchar('\n');
		line++;
	} 
	/*_putchar('\n');*/
}
