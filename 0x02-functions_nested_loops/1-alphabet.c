#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main-entry
*Return:0succes
**/
int main(void)
{	/**
	  *print_alphabe-prints alphabet in lower case
	  *folowed by newline
	  *Retun:0success
	  **/
	void print_alphabet(void)
	{
		for (int i = 97 ; i < 123 ; i++)
		{
			putchar (i);
		};
		putchar ('\n');
	};
	print_alphabet();
}
