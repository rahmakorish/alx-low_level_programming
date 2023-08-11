#include <time.h>
#include <stdio.h>
/**
 * **main-entry
 * **Return:0succes
 * **/
int main(void)
{
	int i = 48;

	while (i <= 57)
	{
		putchar(i);
		if (i == 57)
		{
			break;
		}
		putchar(44);
		putchar(32);
		i++;
	};
	putchar(32);
	return (0);
}
