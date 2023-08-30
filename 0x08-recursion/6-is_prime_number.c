#include "main.h"
/**
 * is_prime_number- return 1 for prime number
 * @n:number to check
 * Return: 1 if prime and o if otherwise
 **/
int is_prime_number(int n)
{
	int check = 2;

	/**for i = 2 i < -1 1-- **/

	if (check > -2)
	{
		if (n % check == 0)
		{
			check--;
			is_prime_number(n);
		}
		else if (n % check > 0)
		{
			return (0);
		}
	}
	else if (check == -1)
	{
		return(1);
	}
}
