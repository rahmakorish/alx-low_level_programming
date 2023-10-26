#include "main.h"
/**
 * get_bit-returns the value of bit index
 * @n:input decimal
 * @index:index of bit
 * Return:value of bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int size = sizeof(n) * 8;

	if (index >= size)
	{
		return (-1);
	}
	else
	{
		return (n >> index & 1);
	}
}
