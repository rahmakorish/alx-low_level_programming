#include "main.h"
#include <string.h>
/**
 * _strcat- appends the 2nd string to the 1st string
 * @dest: string to append to
 * @src: string appended
 **/
char *_strcat(char *dest, char *src)
{
	int nullindex, srcindex;
	int destlen = strlen(dest);
	int srclen = strlen(src);

	for (nullindex = 0; nullindex < (destlen - 1); nullindex++)
	{
		if (dest[nullindex]  == '\0')
		{
			/**dest[nullindex] += src;**/
			for (srcindex = 0; srcindex < srclen && src[srcindex] != '\0';srcindex++)
				dest[destlen + srcindex] = src [srcindex];
			dest[destlen + srcindex] = '\0';
		}
	}
	return (dest);
	_putchar('\n');
}
