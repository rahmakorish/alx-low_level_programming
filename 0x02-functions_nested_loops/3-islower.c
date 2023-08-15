#include "main.h"
/**
 *_islower-check user input
 *Description:this function checks user input
 *@c:input
 *Return:0iflowerchar
 *1ifupper
 **/
int _islower(int c)
{
	if (c > 97 && c < 122)
		return (1);
	else
		return (0);
}
