#include "main.h"
#include <string.h>
/**
 *  * _strncat-append two strings
 *   * @dest: first string
 *    * @src: second string to be appended
 *     * @n: size of src string
 *      * @Return: pointer to the resulting string
 *       **/
char *_strncat(char *dest, char *src, int n)
{
		int destlen = strlen(dest);
			int i,x;

				for (x = 0; x < destlen; x++)
						{
								if (dest[x] == '\0')
										{
												for (i = 0; i <= n && src[i] != '\0'; i++)
														{
																	dest[x + i] = src[n-1];
																			
																		}
													};
									}
					return dest;
}		
