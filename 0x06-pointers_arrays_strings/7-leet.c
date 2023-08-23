#include "main.h"
#include <string.h>
/**
 *leet-encode string into 1337
 *@a:string to be encoded
 *Return: encoded string
 **/
char *leet(char *a)
{
	int i;
	int length = strlen(a);

	for (i = 0 ; i < length; i++)
	{
		if (a[i] == 65 || a[i] == 97)
		{
			a[i] = 52;
		}
		else if (a[i] == 69 || a[i] == 101)
		{
			a[i] = 51;
		}
		else if (a[i] == 79 || a[i] == 111)
		{
			a[i] = 48;
		}
		else if (a[i] == 84 || a[i] == 116)
		{
			a[i] = 55;
		}
		else if (a[i] == 76 || a[i] == 108)
		{
			a[i] = 49;
		}
		else
		{
			continue;
		};
	}
	return (a);
	_putchar('\n');
}
