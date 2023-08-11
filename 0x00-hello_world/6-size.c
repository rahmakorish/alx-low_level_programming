#include <stdio.h>
/**
 *main - entry point 
 *Return: 0 when succed
 **/
int main(void)
{	
	printf("size of a char: %ld byte(s)\n", sizeof(char));
	printf("size of an int: %ld byte(S)\n", sizeof(int));
	printf("size of a long int: %ld byte(S)\n", sizeof(long));
	printf("size of long long int: %ld byte(s)\n", sizeof(double));
	printf("size of a float: %ld byte(S)\n", sizeof(float));
}
