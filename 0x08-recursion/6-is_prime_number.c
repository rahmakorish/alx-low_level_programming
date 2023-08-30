#include "main.h"
/**
 * is_prime_number- return 1 for prime number
 * @n:number to check
 * Return: 1 if prime and o if otherwise
 **/
int factorial(int n);
int is_prime_number(int n)
{
	int factor = factorial(n);

	if (factor % n == n - 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
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
