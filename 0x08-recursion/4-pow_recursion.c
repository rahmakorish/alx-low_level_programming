#include "main.h"
/**
 * _pow_recursion- returns value of x raised to power of y
 * @x:base number
 * @y:power number
 * Return: integer x raised to power of y
 **/
int _pow_recursion(int x, int y)
{
	int z = 0;
	/* x^y if y =3 x*x*x */
	if (y < 0)
	{
		return (-1);
	}
	else if (y > 0)
	{
		z += x * _pow_recursion(x, y - 1);
	}
	else if (y == 0)
	{
		z = 1;
	}
	return (z);
}
