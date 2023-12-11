#include "main.h"
#include <string.h>

/**
 *  *_memset- fills memory with a constant byte
 *   *@s:pointer to memory place
 *    *@b: constant byte
 *     *@n: the first byte
 *      *Return: a pointer to the memory area a
 *       **/
char *_memset(char *s, char b, unsigned int n)
{
		int ptr;

			for (ptr = 0; n > 0; ptr++, n--)
			{
			s[ptr] = b;
			}	
				return (s);
}
