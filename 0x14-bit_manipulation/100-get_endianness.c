#include "main.h"
/**
 *get_endianness-gets the endeness
 *Return:0 if big endian
 **/
int get_endianness(void)
{
	unsigned long int v = 1;

	return (*(char *)&v);
}
