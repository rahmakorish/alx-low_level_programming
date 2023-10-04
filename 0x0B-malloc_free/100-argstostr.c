#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * argstostr - concatenates argumentd of program
 * @ac: first integer
 * @av: pointer
 * Return: pointer to new string
 **/
char *argstostr(int ac, char **av)
{
	char *p;
	int i;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	p = malloc(sizeof(av)*ac);
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= ac; i+=2)
	{
		p[i] = *av[i];
		p[i+1] = '\n';
	}
	return (p);
}
