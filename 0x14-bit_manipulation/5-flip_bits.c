#include "main.h"
/**
 *flip_bits-returns number of bits
 *@n:given num
 *@m:given num
 *Return:number of bits
 **/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int comp = n ^ m, count = 0;

	while (comp)
	{
		if (comp & 1ul)
			count++;
		comp = comp >> 1;
	}
	return (count);
}
