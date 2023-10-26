#include "main.h"
/**
 *print_binary-prints binary of a number
 * @n:decimal num
 * Return:0success
 */
void print_binary(unsigned long int n)
{
	int bit, mask = 0;

	bit = sizeof(n) * 8;
while (bit)
{
	if (n & 1l << --bit)
	{
		_putchar('1');
		mask++;
	}
	else if (mask)
	{
		_putchar('0');
	}
}
	if (!mask)
		_putchar('0');


}
