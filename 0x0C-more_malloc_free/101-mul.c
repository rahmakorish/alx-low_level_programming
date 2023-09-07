#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * mul-multplies 2 nums
 * @num1:first number
 * @num2:second number
 * Return:pointer to new number
 **/
void check_int(int num);
void *mul(int num1, int num2)
{
	int x;
	int *p1, *p2;
(void) x,p1,p2;
	if(check_int(num1) && check_int(num2))
	{
		printf("valid digit");
	}
}
/**check if nums are digit**/
void check_int(int num)
{
	int i;

	for (i = 0; i < 2; i++)
	{
		if (num[i] > 48 && num[i] < 58)
		return (1);
	}
	return (0);
}
