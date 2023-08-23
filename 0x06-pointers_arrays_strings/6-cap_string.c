#include "main.h"
#include <string.h>
/**
 * cap_string- capitalize all words of a string
 * @s:string to be changed
 * Return:string
 **/
char *cap_string(char *s)
{
	int i;
	int length = strlen(s);

	for (i = 0; i < length; i++)
	{
		if (121 > s[i] && 96 < s[i] && s[i - 1] == ' ')
		{
			s[i] = s[i] - 32;
		}
		else
		{
			continue;
		}
	}
	return (s);
	_putchar('\n');
}
