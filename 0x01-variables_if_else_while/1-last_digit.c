#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
*main-entry
*Return:0always
*/
int main(void)
{
		int n;
		
		srand(time(0));
		n = rand() - RAND_MAX / 2;
		int x = n%10;
		if (x == 0)
		{
			printf("Last digit of %d is 0 and is 0\n", n);
		}
		else if (x > 5)
		{
			printf("Last digit of %d is %d and is greater than 5\n", n ,x);
		}
		else
		{
			printf("Last digit of %d is %d and is less than 6 and not 0\n", n, x);
		}
		return (0);
}
