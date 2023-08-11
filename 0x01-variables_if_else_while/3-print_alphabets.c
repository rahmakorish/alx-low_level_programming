#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 **main-entry
 **Return:0succes
 ***/
int main(void)
{
	int i = 97;
	int x = 65;

	while (i < 123)
	{
		putchar(i);
		i++;
	};
	while (x < 91)
	{
		putchar(x);
		x++;
	};
	putchar(10);
	return (0);
}
