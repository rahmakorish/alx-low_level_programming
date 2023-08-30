#include "main.h"
/**
 * _strlen_recursion- returns the length of string
 * @s:string to be measured
 * Return: length of string
 **/
int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s != '\0')
	{
		s++;
		count += _strlen_recursion(s) + 1;
	}
	return (count);
}
