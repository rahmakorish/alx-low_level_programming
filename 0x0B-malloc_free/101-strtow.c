#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 *strtow - splits a string into words
 *@str: string to be splitted
 *Return: pointer to array
 */
char **strtow(char *str)
{
	char *p;
	unsigned len = strlen(str) + 1,i;

	if (str == NULL)
	{
		return (NULL);
	}
	p = malloc(len * sizeof(char));
	if (p == NULL)
	{ free(p); return(NULL);}
	else
	{
		for (i = 0; i < len; i++)
		{
			if(&str[i] == "\n")
			printf("%c",str[i]); }

	}
return(0);
}
