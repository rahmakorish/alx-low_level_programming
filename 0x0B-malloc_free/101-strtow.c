#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 *strtow - splits a string into words
 *@str: string to be splitted
 *Return: pointer to array
 */
char **strtow(char *str)
{
	char **p;
	unsigned len = strlen(str) + 1, i;

	if (str == NULL)
	{
		return (NULL);
	}
	/*allocate array*/
	p = malloc(len * sizeof(char));
	if (p == NULL)
	{ free(p); return(NULL);}
	else
	{
		/*allocate array items */
		for (i = 0; i < len; i++)
		{
			while (str[i]--)
			*p[i] = str[i];
			return(p); 
			printf("%d",*p[i]); }


	}
return(0);
}
