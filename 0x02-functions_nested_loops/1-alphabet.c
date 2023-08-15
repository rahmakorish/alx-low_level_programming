#include "main.h"

/**
*print_alphabet-prints alphabet in lower case
*folowed by newline
*Retun:0success
**/
void print_alphabet(void)
{
	int i = 97;

	while (i < 123)
	{
		_putchar(i);
		i++;
	};
	_putchar('\n');
}
