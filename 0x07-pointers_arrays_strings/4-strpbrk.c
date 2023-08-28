#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _strpbrk- searches string for any set of bytes
 * @s:string searched
 * @accept: string we search for
 **/
char *_strpbrk(char *s, char *accept)
{
	unsigned int i;
	
	for(i = 0; i < strlen(s); i++)
	{
		if(s[i] == accept[i])
		{	
			printf("%d\n",s[i]);
			break;
		}
	}
	printf("%s\n",accept);
	return(0);
}

