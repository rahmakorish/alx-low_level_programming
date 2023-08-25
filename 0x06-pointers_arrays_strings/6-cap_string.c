#include "main.h"
#include <string.h>
/**
 * cap_string- capitalize all words of a string
 * @s:string to be changed
 * Return:string
 **/
char *cap_string(char *s)
{
	int i, z;
	int length = strlen(s);
	char sep[] = {',', ';', '.', '?', '\n', '\t', '"', '(', ')', '{', ' ', '}'};

	for (i = 0; i < length; i++)
	{
		for (z = 0; z < 13; z++)
		{
		if (121 > s[i] && 96 < s[i] && s[i - 1] == sep[z])
		{
			s[i] = s[i] - 32;
		}
		else
		{
			continue;
		}
		}
	}
	return (s);
	_putchar('\n');
}
