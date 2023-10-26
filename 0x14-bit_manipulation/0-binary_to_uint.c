#include "main.h"
/**
 * binary_to_uint-converts binary to unsigned int
 * @b:string binary
 * Return:converted number
 **/
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0, weight = 1;
	unsigned int rem, numb;

	if (!b)
	return (0);
	else
	{
		numb = atoi(b);
		while (numb)
		{
			rem = numb % 10;
			decimal = decimal + rem * weight;
			weight = weight * 2;
			numb = numb / 10;
		}
	}
		return (decimal);
}
