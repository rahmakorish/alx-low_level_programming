#include "main.h"
/**
 * _abs-compute the absloute value of integer
 * @x:user input
 * Return:absloute value of input
 **/
int _abs(int x)
{
	if(x > 0)
	{	
		return (x%10);
	}
	else if (x < 0)
	{
		x= x * -1;
		return (x % 10);
	}
}
