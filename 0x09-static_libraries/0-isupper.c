#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*_isupper-checks for uppercase character
*@c:character checeked
*Return:0succes
**/
int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	};
}
