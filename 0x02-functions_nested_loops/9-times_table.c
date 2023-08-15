#include "main.h"
#include <stdio.h>
/**
 * times_table-prints the 9 times table
 * descriptio: ptints 9 table
 * Return:digits
 **/
void times_table(void)
{
	int x = 0;
	int y = 0;

	while (x < 9)
	{
		while(y < 9)
		{
			int z = x * y;
			x++;
			y++;
		
		printf ("%d, ", z);
	};
	}
}
