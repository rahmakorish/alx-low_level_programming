#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
 *string_nconcat- concatanate two strings
 *@s1:first string
 *@s2:second string
 *@n:start point in s2
 *Return:pointer to new concatanated string
 **/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i = 0, x = 0, len1 = 0, total;

	if (s1 == NULL)
	{
		s1 = " ";
	}
	if (s2 ==  NULL)
	{
		s2 = " ";
	}
	/*len1 = strlen(s1) + 1;*/
	while (*s1)
	{
		len1++;
		s1++;
	}
	total = len1 + n + 1;
	p = malloc((total) * sizeof(char));
	if (p == NULL)
	{
		return (NULL);
		exit(98);
	}
	else
	{
		while (i < len1)
		{
			p[i] = s1[i];
			i++;
		}
		while (x < n)
		{
			p[len1 + x] = s2[x];
			x++;
		}
	}
	return (p);
	exit(98);
}
