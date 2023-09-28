#include "main.h"
/**
 * factorial-returns factorial of a given number
 * @n:factorial number
 * Return: factorial of given number
 **/
int factorial(int n)
{
	int fact = 0;

	if (n < 0)
	{
		return (-1);
	}
	else if (n > 0)
	{
		fact += (n * factorial(n - 1));
		/*factorial(n-1);*/
	}
	else if (n == 0)
	{
		fact = 1;
	}
	return (fact);
}
