#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**check if nums are digit**/
int check_int(char num)
{
	if (num > 48 && num < 58)
	{
	printf("%d\n",num);
	return(num);}
}
/**
 * mul-multplies 2 nums
 * @num1:first number
 * @num2:second number
 * Return:pointer to new number
 **/
int check_int(char num);
void *mul(int num1, int num2)
{
/*	int x;
	int *p1, *p2;
        (void)x,p1,p2;*/
	if(check_int(num1) && check_int(num2))
	{
		printf("valid digit");
	}
	return(0);
}

