#include "main.h"
#include <string.h>
/**
 * print_chessboard-prints the chessboard
 * @a:board to be printted
 **/
void print_chessboard(char (*a)[8])
{
	unsigned int i, x;

	for (x = 0; x < 8; x++)
	{
		for (i = 0; i < 8; i++)
		{
			_putchar(a[x][i]);
		}
		_putchar('\n');
	}
}
