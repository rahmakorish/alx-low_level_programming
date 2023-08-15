#include <time.h>
#include <stdio.h>
/**
 * **main-entry
 * **Return:0succes
 * **/
int main(void)
{
	int i = 48;
	int x = 48;
	while (i<58)
	{ 
		while( x < 58)
		{       //if ( i == x)
			//{break;}
			putchar(i);
			putchar(x);
			putchar(44);
			putchar(32);
			x++;
		
		}
		i++;
	}
	return (0);
}
