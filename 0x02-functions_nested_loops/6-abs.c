#include "main.h"
/**
 * _abs-compute the absloute value of integer
 * @x:user input
 * Return:absloute value of input
 **/
int _abs(int x)
{
	int z = x % 10;

	if(x > 0)
	{	
		return (z);
	}
	else if (x < 0)
	{
		z= z * -1;
		return (z);
	};
}
