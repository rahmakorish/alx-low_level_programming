#include "main.h"
#include <string.h>
/**
 *  * _strcat- appends the 2nd string to the 1st string
 *   * @dest: string to append to
 *    * @src: string appended
 *     * Return:pointer to the resulting string dest
 *      **/
char *_strcat(char *dest, char *src)
{
		
		int nullindex, srcindex;
			int destlen = strlen(dest);

				for (nullindex = 0; nullindex < destlen; nullindex++)
						{
									if (dest[nullindex]  == '\0') 
												{
																for (srcindex = 0;src[srcindex]; srcindex++)
																				{
																									dest[nullindex++] = src[srcindex];	
																												}
																		}
										}
					return (dest);
						_putchar('\n');
}
