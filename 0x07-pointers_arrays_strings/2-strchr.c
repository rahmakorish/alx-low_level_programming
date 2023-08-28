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
	char *ptr;

		while (s)
		{
			if (s++ == &c)
			{
				ptr = s++;
				break;
			}
			else
			{
				return (NULL);
			}
		}
		return (ptr);
}
