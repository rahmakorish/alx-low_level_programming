#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main-entry
*Return:0succes
**/
int main(void)
{
	int i = 97;

	while (i < 123)
	{
		if (i != 101)
		if (i != 113)
		putchar(i);
		i++;	
	};
	putchar(10);
	return (0);
}
