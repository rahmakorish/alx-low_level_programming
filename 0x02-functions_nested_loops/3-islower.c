#include "main.h"
/**
 *_islower:check if input is char
 *c:input
 *Return:0iflowerchar
 *1ifupper
 **/
int _islower(int c)
{
	if (c < 90)
	{
		if (c > 65)
		
			return 1;
	}
	else
		return 0;
}
