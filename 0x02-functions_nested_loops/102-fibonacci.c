#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main-entry
*Return:0succes
**/
int main(void)
{
	long int x = 1;
	long int y = 0;
	int count = 0;

	while (count < 50)
	{
		long int z = x + y;

		if (z == 20365011074)
		{
			printf("%ld", z);
			printf("\n");
			return (0);
		}

		printf("%ld, ", z);
		y = x;
		x = z;
		count++;
	}
	printf("\n");
	return (0);
}
