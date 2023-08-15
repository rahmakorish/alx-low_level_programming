#include "main.h"
/**
*print_alphabet_x10-prints alphabet ten times
*Return:0succes
**/
void print_alphabet_x10(void)
{
	int x = 0;

	while (x < 10)
	{
		int y = 97;

		while (y < 123)
		{
			_putchar (y);
			y++;
		};
		_putchar('\n');
		x++;
	}
}
