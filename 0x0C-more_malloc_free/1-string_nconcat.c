#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 *string_nconcat-concatenates two strings
 *@s1:first string
 *@s2:second string
 *@n:number of first n of s2 in the heap
 *Return:pointer to allocated memory
 **/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int len1, len2, i1 = 0, i2 = 0;

	if (s1 == NULL)
	{s1 = "";
	}
	len1 = strlen(s1);
	if (s2 == NULL)
	{s2 = "";
	}
	len1 = strlen(s1);
	len2 = strlen(s2);
	p = malloc(sizeof(char) * (len1 + n + 1));
	if (p == NULL)
	{free(p);
	return (NULL);
	}
	else
	{
		if (n >= len2)
		{
			n = len2;
		}
		while (i1 < len1)
		{
			p[i1] = s1[i1];
			i1++;
		}
		while (i2 < n)
		{
			p[i2 + len1] = s2[i2];
			i2++;
		}
		p[len1 + n + 1] = '\0';
	}
	return (p);
}
