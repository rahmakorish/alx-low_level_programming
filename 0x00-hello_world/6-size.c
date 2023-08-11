#include <stdio.h>
/**
*main-entry point 
*Return: (0) mean program executed
**/
int main(void)
{
	printf("Size of a char: %ld byte(s)\n", sizeof(char));
	printf("Size of an int: %ld byte(S)\n", sizeof(int));
	printf("Size of a long int: %ld byte(S)\n", sizeof(long));
	printf("Size of long long int: %ld byte(s)\n", sizeof(double));
	printf("Size of a float: %ld byte(S)\n", sizeof(float));
	return(0);
}
