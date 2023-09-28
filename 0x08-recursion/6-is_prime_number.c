#include "main.h"
/**
 * is_prime_number- return 1 for prime number
 * @n:number to check
 * @ch:second number
 * Return: 1 if prime and o if otherwise
 **/

int check_prime(int n, int ch);
int is_prime_number(int n)
{
	int check = check_prime(n, n - 1);

	return (check);
}
/**
 * check_prime-checks if num is prime by taking the number and num next to ir
 *@n:number checked
 *@ch:second parameter
 *Return: 1 if prime
 **/
int check_prime(int n, int ch)
{
	/**if true number isn't prime*/
	if (n <= 1)
	{
		return (0);
	}
	else if (n == 2)
	{
		return (1);
	}
	else if (n % (ch) == 0)/* to check 17 **/
	{
		return (0);
	}
	/** if always true then num is prime return (1)*/
	else if (ch >= n / 2)
	{
		return (1);
	}
	else
	{
		return (check_prime(n, ch + 1));
	}
}
