#include "main.h"
/**
 * _sqrt_recursion-returns the square root of a number
 * @n: number to get square root
 * Return: square root of number n
 */
/*
 *get_square- gets the square root of num
 *@n: number to check
 *@root:output num
 *Return:root of n
 **/
int get_square(int n, int root);
int _sqrt_recursion(int n)
{
	int rootfinal = get_square(n, 1);

	return (rootfinal);
}
int get_square(int n, int root)
{
	if (root * root == n)
	{
		return (root);
	}
	else if (root * root < n)
	{
		return (get_square(n, root + 1));
	}
	else
	{
		return (-1);
	}
}
