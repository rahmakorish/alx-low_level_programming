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
char *newstr(char *s1,int len1, char *s2, int len2)
{
	int i= 0, x= 0;
	char *str = '\0';

	while(i <= len1)
	{
		str[i] = s1[i];
		i++;
	}
	while(x <= len2)
	{
		str[len1 + x] = s2[x];
		x++;
	}
	str[len1 + len2] = '\0';
	return (str);

}
char *str_concat(char *s1, char *s2)
{
	int len1 = 0, len2 = 0;
	char *cat, *tmp1 = s1, *tmp2 = s2;

	while (*s1 != '\0')
	{
		len1++;
		s1++;
	}
	while (*s2 != '\0')
	{
		len2++;
		s2++;
	}
	cat = malloc(sizeof(char) * (len1 + len2 + 1));
	if (cat == NULL)
	{
		return (NULL);
	}
	else
	{
		cat = newstr(tmp1, len1, tmp2, len2);
		printf("%s\n",cat);
	}
	return (cat);
}
