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
	/* memcpy ( from location buffer 0+50, from buffer2 , take 10 places)*/
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
