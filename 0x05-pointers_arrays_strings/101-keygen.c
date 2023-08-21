#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main-entry point
 * @n:length of password required
 * Return:0success
 * */
int main (void)
{
	int i, n = 15;
	time_t t;

	srand((unsigned) time(&t));
	for (i = 0; i < n; i++)
	/*	printf("%c", rand());*/
		putchar(rand());
	return (0);
}
