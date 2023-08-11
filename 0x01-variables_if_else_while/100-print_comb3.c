#include <time.h>
#include <stdio.h>
/**
 * **main-entry
 * **Return:0succes
 * **/
int main(void)
{
	for(int i = 48; i<58;)
	{ 

		for(int x = 49; x<58; x++)
		{
			putchar(i);
			putchar(x);
			putchar(44);
			putchar(32);
		}
		i++;
	}
	return (0);
}
