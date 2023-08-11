#include <time.h>
#include <stdio.h>
/**
 * **main-entry
 * **Return:0succes
 * **/
int main(void)
{
	//int i = 48;
	//int x = 58;
	for (int i =48;  i<58; )
	{ 
		for(int x =48; x < 58; x++)
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
