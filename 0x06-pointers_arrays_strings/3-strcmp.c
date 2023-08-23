#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _strcmp- compares two strings
 * @s1: first string
 * @s2: second string
 * Return:0 if strings are identical
 **/
int _strcmp(char *s1, char *s2)
{
	int diff, i, x;
       	int lens1 = strlen(s1);
	int lens2 = strlen(s2);

	for (i = 0; i < lens1 - 1; i++)
	{ 
		for (x = 0; x < lens2 - 1; x++)
	{ 
		if (s1[i] == s2[i])
			{
				diff = 0;
				continue;
			}
			else if (s1[i] > s2[i])
			{
				printf("s1=%c s2=%c\n",s1[i],s2[x]);
				diff = s1[i] - s2[x];
				break;
			}
			else
			{
				diff = -(s2[x] - s1[i]);
			}
		
	};
	}
	return (diff);
}

/**	if (lens1 > lens2)
	{
		diff = lens1 + lens2;
		return (diff);
	}
	else if (lens2 > lens1)
	{
		diff = -(lens1 + lens2);
		return (diff);
	}
	else
	{
		diff = lens1 - lens2;
		return (diff);
	}
	return (0);
}**/
