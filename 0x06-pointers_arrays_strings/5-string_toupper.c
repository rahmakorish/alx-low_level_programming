#include "main.h"
#include <string.h>
/**
 * string_toupper- changes all lowercase letters of a string to uppercase
 * @a:string to change
 * Return:new string
 **/
char *string_toupper(char *a)
{
	int i;
	int length = strlen(a);

	for (i = 0; i < length; i++)
	{
		if (121 > a[i] && 96 < a[i])
		{
		a[i] = a[i] - 32;
		}
		else
		{
		a[i] = a[i];
		}
	}
	return (a);
	_putchar('\n');
}
