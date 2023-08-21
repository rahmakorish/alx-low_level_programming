#include "main.h"
#include <string.h>
/**
 * _strcpy- copies string in src to dest
 * @dest:place to copy string
 * @src: string to be copied
 * Return:pointer to dest
 **/
char *_strcpy(char *dest, char *src)
{
	int i, x;
	int src_len = strlen(src);
	int dest_len = strlen(dest);

	while (*dest++ != '\0')
	{	
		for (i = 0; i < src_len + 1; i++)
		{
			for (x = 0; x < dest_len + 1; x++)
			{
				dest[x] = src[i];
			}
		}
	};
	return (dest);
}
