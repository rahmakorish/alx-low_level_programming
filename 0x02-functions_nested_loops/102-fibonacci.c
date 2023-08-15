#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main-entry
*Return:0succes
**/
int main(void)
{
	int x = 1;
	int y = 0;
	int count = 0;
	
	while (count < 51)
	{
		int z = x + y;

		printf("%d, ", z);
		y = x;
		x = z;
		count++;
	}
	printf(" ");
	return (0);
}
