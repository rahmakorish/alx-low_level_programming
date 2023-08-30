#include "main.h"
/**
 * _strlen_recursion- returns the length of string
 * @s:string to be measured
 * Return: length of string
 **/
int _strlen_recursion(char *s)
{
	static int count;

	if (*s)
	{

		count++;
		s++;
		_strlen_recursion(s);
	}
	return (count);
}
