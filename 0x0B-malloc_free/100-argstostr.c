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
	/* ac = argument count , av =srgument vector*/
	char *p, **tmp = av;
	int wordlen = 0,i, x;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	/*allocate space for total argument*/
	/*allocate space for every argument itself*/
	p = malloc((sizeof(*av) * ac));
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
	while(*av[ac] != '\0')
	{
		wordlen++;
		av[ac]++;
	}
		av[ac] = malloc(sizeof(char)*wordlen);
		for (x = 0; x < wordlen; x++)
		{
			av[ac][x] = tmp[ac][x];
		}
	}
	return (p);
}
