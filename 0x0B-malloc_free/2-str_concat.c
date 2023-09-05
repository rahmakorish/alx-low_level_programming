#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * str_concat - function concatenate two strings
 * @s1: first input string
 * @s2: second string
 * Return: pointer to allocated string
 **/
char *str_concat(char *s1, char *s2)
{
	unsigned int size1, size2, i1 = 0, i2 = 0;
	char *p;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";
	size1 = strlen(s1);
	size2 = strlen(s2);
	p = malloc((size1 + size2 + 1) * sizeof(char));
	if (p == NULL)
	{
		return (NULL);
	}
	else
	{
		while (i1 < size1)
		{
			p[i1] = s1[i1];
			i1++;
		}
		while (i2 < size2)
		{
			p[size1 + i2] = s2[i2];
			i2++;
		}
	}
	return (p);
}
