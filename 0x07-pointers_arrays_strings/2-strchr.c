#include "main.h"
#include <string.h>
/**
 * _strchr- locates a character in a string
 * @s: string to searh
 * @c: character to search for
 * Return: a pointer to first occurance of the character
 **/
char *_strchr(char *s, char c)
{
	unsigned int i;

	while (*s != '\0')
	{
		for (i = 0; i < strlen(s); i++)
		{
			if (s[i] == c)
		{
			return (s + i);
		}
		else
		{
			continue;
		}
		}
	}
	return (NULL);
}
