#include "main.h"
/**
 *  * _strlen-returns the length of a astring
 *   * @s:string input
 *    * Return:string length
 *     **/
int _strlen(char *s)
{
		int count = 0;

			while (*s++ != '\0')
					{
								count++;
									};
				return (count);
}
