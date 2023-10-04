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
	char *p;
	int i;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	/*allocate space for total argument*/
	/*allocate space for every argument itself*/
	p = malloc(sizeof(char) * ac + 51);
	if (p == NULL)
	{
		return (NULL);
	}
	else
	{

		for (i = 0; i < ac; i++)
		{
		printf("%s\n", av[i]);
		}
	}
	return (p);
}
