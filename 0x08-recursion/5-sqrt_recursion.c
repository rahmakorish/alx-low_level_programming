#include "main.h"
/**
 * _sqrt_recursion-returns the square root of a number
 * @n: number to get square root
 * Return: square root of number n
 **/
int _sqrt_recursion(int n)
{
	int root = 1;

	if (root * root == n)
	{
		return (root);
	}
	else
	{
		return (-1);
	}
}
