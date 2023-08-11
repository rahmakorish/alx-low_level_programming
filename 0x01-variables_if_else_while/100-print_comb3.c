#include <time.h>
#include <stdio.h>
/**
 * **main-entry
 * **Return:0succes
 * **/
int main(void)
{
	int i = 48;
	int x = 49;

	for(i; i<58; i++)
	{ 

		for(x; x<58; x++)
		{
			putchar(i);
			putchar(x);
			putchar(44);
			putchar(32);
		}
	}
	return (0);
}
