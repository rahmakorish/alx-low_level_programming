#include "main.h"
#include <string.h>
/**
 * is_palindrome- return 1 if string is palindrome
 * @s:string to check
 * Return: 1 if identical
 **/
int is_palindrome(char *s)
{
	unsigned int len = strlen(s) - 1;

	if (len % 2 == 0)
	{
		int middle = len / 2;
	if (s[middle] == s[middle - 1])
	{
		return (1);
	}
	else if (s[middle - 1] == s[middle + 1])
	{
		return (1);
	}
	else
	{
		return (0);
	}
	};
	return (0);
}
