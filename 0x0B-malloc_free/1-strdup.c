#include "main.h"
#include <stdlib.h>
/**
 *_strdup-copy string and return pointer
 *@str:string to be copyed
 *Return:pointer to copied string
 **/
char *_strdup(char *str)
{
	int i, len = 0;
	char *p;

	if (str == NULL)
	return (NULL);
	else
	{
	while (*str != '\0')
	{
		len++;
		str++;
	}
	p = malloc(sizeof(char) * len + 1);
	if (p == NULL)
	return (NULL);
	else
	{
		for (i = 0; i <= len; i++)
			p[i] = str[i];
	}
	return (p);
	}
}
