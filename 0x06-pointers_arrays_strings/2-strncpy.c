#include "main.h"
#include <string.h>
/**
 *_strncpy-copies a string
 *@dest: string copied
 *@src:string to be copied
 *@n:size of src string
 *Return: pointer to the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return dest;
}
