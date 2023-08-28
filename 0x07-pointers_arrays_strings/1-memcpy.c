#include "main.h"
#include <string.h>
/**
 * _memcpy - copies memory area
 * @dest : memory set to paste
 * @n : number of bytes
 * @src : memory area to copy from
 * Return: pointer to dest
 **/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	dest[n] = src[n];
	return (dest);
}
