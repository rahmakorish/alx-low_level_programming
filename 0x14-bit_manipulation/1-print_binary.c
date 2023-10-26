#include "main.h"
/*
 * print_binary-prints binary of a number
 * @n:decimal num
 * Return:0success
 */
void print_binary(unsigned long int n)
{
	int bit, mask =0;
	bit = sizeof(unsigned long int) * 8;
while (bit)
{
	if (n & 11 << --bit)
	{_putchar('1');
		mask++;
	}
	else if (mask)
	{
		putchar('0');
	}
}

}
