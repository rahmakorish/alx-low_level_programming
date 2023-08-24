#include "main.h"
#include <string.h>
/**
 * _strcmp- compares two strings
 * @s1: first string
 * @s2: second string
 * Return:0 if strings are identical
 **/
int _strcmp(char *s1, char *s2)
{
	int diff, i;
	int lens1 = strlen(s1);

	for (i = 0; i < lens1 - 1; i++)
	{
		if (s1[i] == s2[i])
		{
			diff = 0;
			continue;
		}
		else if (s1[i] > s2[i])
		{
			diff = s1[i] - s2[i];
			break;
		}
		else
		{
			diff = -(s2[i] - s1[i]);
			break;
		}
	}
	return (diff);
}
