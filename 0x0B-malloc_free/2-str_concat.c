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
	int len1, len2 = 0, i, x = len2;
	char *cat;

	while(*s1 != '\0')
	{
		len1++;
		s1++;
	}
	while(*s2 != '\0')
	{
		len2++;
		s2++;
	}
	cat = malloc(sizeof(char) *(len1 +len2 + 1));
	if (cat == NULL)
	return (NULL);
	else
	{
		for (i = 0; i <= len1; i++)
		{ cat[i] = s1[i];}
		for(i = 0; i <= len2; i++)
		{	
			while(x <= len2)
		{
		 cat[x] = s1[i];
		 x++;
		}
		cat[len1 + len2 + 1] = '\0';
	}
	}
	return (cat);
}
