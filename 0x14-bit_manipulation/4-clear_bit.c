#include "main.h"
/**
 *clear_bit-sets the value to 0 at index
 * @n:given num
 * @index:index needed
 * Return:1success 0 fail
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int size = sizeof(n) * 8;

	if (index >= size)
	{
		return (-1);
	}
	if (*n & 1l << index)
	{
		*n ^= 1l << index;
	}
return (1);
}
