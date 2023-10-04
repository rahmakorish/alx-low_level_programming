#include "main.h"
#include <stdio.h>
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
	unsigned int len1 = 0, len2 = 0, i = 0, x = 0;
	char *cat, *tmp1 = s1, *tmp2 = s2;

	if (s1 == NULL)
	{s1 = "";
	}
	len1 = strlen(s1);
	if (s2 == NULL)
	{s2 = "";
	}
	len2 = strlen(s2);
	cat = malloc(sizeof(char) * (len1 + len2 + 1));
	if (cat == NULL)
	{
		return (NULL);
	}
	else
	{
		while (i <= len1)
	{
		cat[i] = tmp1[i];
		i++;
	}
	while (x <= len2)
	{
		cat[len1 + x] = tmp2[x];
		x++;
	}
		cat[len1 + len2] = '\0';
	}
	return (cat);
}
