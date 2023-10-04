#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *_strdup-copy string and return pointer
 *@str:string to be copyed
 *Return:pointer to copied string
 **/
char *_strdup(char *str)
{
	int i, len = 1;
	char *p, *tmp;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		tmp = str;
	while (*str != '\0')
	{
		len++;
		str++;
	}
	}
	p = malloc(sizeof(char) * len);
	if (p == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < len; i++)
		p[i] = tmp[i];
		p[len] = '\0';
	}
		return (p);
}
