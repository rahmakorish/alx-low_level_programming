#include "main.h"
#include <stdio.h>

/*
*main-entry point for the program
*Description: This prints fizzbuzz if number can be divided by 3 and 5
*Return:0success
**/
int main(void)
{
	int x = 1;

	while (x <= 100)
	{
		if (x % 3 == 0 && x % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (x % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (x % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", x);
		}
		x++;
	}
	putchar('\n');
	return (0);
}
