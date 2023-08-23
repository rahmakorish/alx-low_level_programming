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
		};
	}
	return (a);
	_putchar('\n');
}
