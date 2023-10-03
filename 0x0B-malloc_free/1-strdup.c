#include "main.h"
#include <stdlib.h>
/**
 *_strdup-copy string and return pointer
 *@str:string to be copyed
 *Return:pointer to copied string
 **/
char *_strdup(char *str)
{
	int i = 0, len = 0;
	char *p;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
	while (*str != '\0')
	{
		len++;
		str++;
	}
	p = malloc(sizeof(char) * len + 1);
	if (p == NULL)
	{
		return (NULL);
	}
	else
	{
		while (i < len)
		{
			p[i] = str[i];
			i++;
		}
		p[len + 1] = '\0';
		return (p);
	}
	}
}
