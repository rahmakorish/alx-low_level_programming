#include "main.h"
#include <string.h>
/**
 *  * _strstr- locates a substring
 *   * @haystack:string to be searched
 *    * @needle: substring to be located
 *     * Return: pointer to the beginning of the substring
 *      **/
char *_strstr(char *haystack, char *needle)
{
		int i = 0, x = 0;

			while (*needle != '\0')
					{
								while (*haystack != '\0')
											{
															if (haystack[i] == needle[x])
																			return (needle + x);
																		else
																						i++;
																					continue;
																							}
										x++;
											}
				return (NULL);
}
