#include "main.h"
/**
 * more_numbers-prints the numbers 10 times
 * Return:0success
 **/
void more_numbers(void)
{
	int i = 0;
	int line = 0;

	while (line < 10)/*prints 10 lines*/
	{
		while (i <= 14)/*print up to 9*/
		{
			if (i > 9 && i < 15)
			{
				_putchar(49);
			}
			_putchar(i + 48);
			i++;
		}
		_putchar('\n');
		i = 0;
		line++;
	}
	/*_putchar('\n');*/
}
