#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main-entry
*Return:0succes
**/
int main(void)
{
	int i = 0;
	int sum = 0;

	while (i < 1025)
	{
		if (i % 5 == 0 || i % 3 == 0)
		{
			sum += i;
		}
		i++;
	}
		printf("%d\n", sum);
		return (0);	
}
