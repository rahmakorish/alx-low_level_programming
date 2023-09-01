
#include <stdio.h>
/**
 * main-prints the program own name
 * @argv: vector contain command line arguments
 * @argc: number of command line arguments
 * Return: program name
 **/
int main(int argc, char **argv)
{
	printf("%s", argv[argc - 1]);
	putchar('\n');
	return (0);
}
