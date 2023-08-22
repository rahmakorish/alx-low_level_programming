#include "main.h"
/**
 * more_numbers-prints the numbers 10 times
 * Return:0success
 **/
void more_numbers(void)
{
	int i, asci;
	int line;

	for (line = 1; line <= 10; line++)
	{
		for (i = 0; i <= 14; i++)
		{
			asci = i;
			if (i > 9 && i < 15)
			{
				_putchar(49);
				asci = i % 10;
			}
			_putchar(asci + 48);
		}
		_putchar('\n');
	}
}
