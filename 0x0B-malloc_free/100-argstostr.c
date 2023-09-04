#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * argstostr - concatenates argumentd of program
 * @ac: first integer
 * @av: pointer
 * Return : pointer to new string
 **/
char *argstostr(int ac, char **av)
{
	char *p;
	int i;

	if (ac == 0 || av == NULL)
	{return (NULL);}
	p = malloc(ac * sizeof(char));
	if (p == NULL)
	{
		return (NULL);
	}
	else
	{
		for(i = 0; i < ac; i++)
		{
		/*printf("%s\n",av[i]);*/
		_putchar(av[i]);
		_putchar('\n');
	
		}
	}
	return(0);
}
