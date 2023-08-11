#include <time.h>
#include <stdio.h>
/**
 * **main-entry
 * **Return:0succes
 * **/
int main(void)
{
	int i = 48;
	
	while (i < 58)
	{
		putchar(i);
		putchar(32);
		putchar(44);
		i++;
	};
	putchar(44);
	return (0);
}
