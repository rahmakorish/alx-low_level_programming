#include "main.h"
#include <string.h>
/**
 * rev_string-reverse a string
 * @s:string to be reversed
 **/
void rev_string(char *s)
{
	int i, x = 0, slen= strlen(s);/*len = 9*/
	i = slen - 1;

	while( i > 0)/* i = 8 */
	{
		while(x < slen)/* x = 0*/
		{		
			s[x] = s[i];/* s[0]= s[8]*/
			i--;
			x++;
		}
		
	}
	/*_putchar('\n');*/
}	
