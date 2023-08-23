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
	int diff;
	int lens1 = strlen(s1);
	int lens2 = strlen(s2);

	if (lens1 > lens2)
	{
		diff = lens1 + lens2;
		return (diff);
	}
	else if (lens2 > lens1)
	{
		diff = -(lens1 + lens2);
		return (diff);
	}
	else
	{
		diff = lens1 - lens2;
		return (diff);
	}
	return (0);
}
