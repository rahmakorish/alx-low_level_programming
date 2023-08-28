#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _strspn- gets the length of a prefix substring
 * @s:string to search
 * @accept: required prefix
 * Return: number of bytes in initial segment
 **/
unsigned int _strspn(char *s, char *accept)
{
	int i = 0, x = 0;


	while (*s != '\0')	/**increment pointer**/
	{
		while (*accept != '\0')
		{
			if (s[i] == accept[x])
			return (i + 1);
			else
			i++;
		}
		x++;
	}
	return (i + 1);
}

