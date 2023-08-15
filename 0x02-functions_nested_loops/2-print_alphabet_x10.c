#include "main.h"

/**
*print_alphabet_x10-prints alphabet ten times
*Return:0succes
**/
void print_alphabet_x10(void)
{
	int x = 0;
	int y = 97;

	do
	{
		while (y < 123)
		{
			_putchar (y);
			y++;
		}; x++;
	}
	while (x < 9);
}
