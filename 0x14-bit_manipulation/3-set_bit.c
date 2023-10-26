#include "main.h"
/**
 *set_bit-sets value of a bit to 1
 * @n:decimal num
 * @index:indexof bit
 * Return: 1success 0 error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int size = sizeof(n) * 8;
	unsigned long int bit;

	if (index >= size)
	{
		return (-1);
	}
	else
	{
		bit = (*n << index & 1);
		if (bit == 0)
		bit = 1;
	}
	return (1);
}
