#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main-entry
*Return:0succes
**/
int main(void)
{
	long long int x = 1;
	long long int y = 0;
	int count = 0;

	while (count < 50)
	{
		long long int z = x + y;

		if (z == 20365011074)
		{
			printf("%lld", z);
			printf("\n");
			return (0);
		}

		printf("%lld, ", z);
		y = x;
		x = z;
		count++;
	}
	printf("\n");
	return (0);
}
