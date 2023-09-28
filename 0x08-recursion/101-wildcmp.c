#include "main.h"
#include <string.h>
/**
 * wildcmp- function that compares two strings 
 * @s1:first string
 * @s2:second string
 * Return:1 if identical
 **/
int wildcmp(char *s1, char *s2)
{
	unsigned int len1 = strlen(s1) - 1;
	unsigned int len2 = strlen(s2) - 1;
	unsigned int i, x;

	if (len1 == len2)
	{
		return (1);
	}
	else
	{
	for (i = 0; i < len1 + 1; i++)
	{
		if (s1[i] == '*')
		return (1);
	}
	for (x = 0; x < len2 + 1; x++)
	{
		if (s2[x] == '*')
		return (1);
	}
	}
	return (0);
}
