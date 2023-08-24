#include "main.h"
#include <string.h>
/**
 * cap_string- capitalize all words of a string
 * @s:string to be changed
 * Return:string
 **/
char *cap_string(char *s)
{
	int i;
	int length = strlen(s);

int check(char *s)
{
int x,z;	
char separators [] = {',', ';', '.', '!', '?','\n' ,'"', '(', ')','{',' ' ,'}'};
for (x = 0; x < strlen(s); x++)
for (z = 0; z < 11; z++)
{
	if (s[x] == separatores[z])
	return (0);
	else
	return (1);
}	

checker = check(s);
	
	for (i = 0; i < length; i++)
	{	
		if (121 > s[i] && 96 < s[i] && checker) /*(s[i - 1] == ' ')*/
		{
			s[i] = s[i] - 32;
		}
		else 
		{
			continue;
		}
	}
	return (s);
	_putchar('\n');
}
