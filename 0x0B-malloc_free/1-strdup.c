#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * _strdup - create newly allocated space with copy of string
 * @str : string to be copied
 * Return:null pointer to new string
 **/
char *_strdup(char *str)
{
	unsigned int size = strlen(str) + 1, i = 0;
	char *p;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		p = malloc(size * sizeof(char));
		if (p == NULL)
		{
			return (NULL);
		}
		else
		{
		while (i < size)
		{
			p[i] = str[i];
			i++;
		}
		return (p);
		}
	}
}
