#include "calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *op_add-sum of a and b
 *@a:first int
 *@b:second int
 *Return:sun of a and b
 **/
int op_add(int a, int b)
{
	int sum = a + b;
	return (sum);
}
/**
 *op_sub-subtract of a and b
 *@a:first int
 *@b:second int
 *Return:sub of a and b
 **/
int op_sub(int a, int b)
{
	int sub = a - b;
	return (sub);
}
/**
 *op_mul-multplication of a and b
 *@a:first int
 *@b:second int
 *Return:multiplication of a and b
 **/
int op_mul(int a, int b)
{
	int mul = a * b;
	return (mul);
}
/**
 *op_div-divide of a and b
 *@a:first int
 *@b:second int
 *Return:dividion of a and b
 **/
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error");
		return (1);
	}
	else
	{
	int div = a / b;
	return (div);
	}
}
/**
 *op_mod-modulus of a and b
 *@a:first int
 *@b:second int
 *Return:modulus of a and b
 **/
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error");
		return (0);
	}
	int mod = a % b;
	return (mod);
}

