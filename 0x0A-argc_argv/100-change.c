#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *main-prints the number of arguments passed into it
 *@argc:number of argument count
 *@argv:vector of commandline argument
 *Return:product of 2 inputted numbers
 **/
int main(int argc, char *argv[])
{
	int cents[] = {25,10,5,2,1};
	int i, output;

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	else if (argc ==2)
	{
		if(atoi(argv[1]) < 0)
		{
			printf("0\n");
		} 
		else
		{
			for(i = 0; i < 4; i++)
		{
			if(atoi(argv[1])%cents[i] == 0)
			{	
				output= atoi(argv[1]) / cents[i];
				printf("%d\n",output);
				break;
			}
			else 
			{
				output = atoi(argv[1])% cents[i];
				printf("%d\n",output);
				break;
				}
		}
		}
	}
	return(0);
}
