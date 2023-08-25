#include "main.h"
#include <string.h>
/**
 *leet-encode string into 1337
 *@a:string to be encoded
 *Return: encoded string
 **/
char *leet(char *a)
{
	int i, x;
	int length = strlen(a);
	char lower[5] = {'a', 'e', 'o', 't', 'l'};
	char upper[5] = {'A', 'E', 'O', 'T', 'L'};
	char nums[5] = {'4', '3', '0', '7', '1'};

	for (x = 0; x < 5; x++)
	{
		for (i = 0 ; i < length; i++)
		{
			if (a[i] == upper[x] || a[i] == lower[x])
			{
				a[i] = nums[x];
			};
		}
	}
	return (a);
	_putchar('\n');
}
