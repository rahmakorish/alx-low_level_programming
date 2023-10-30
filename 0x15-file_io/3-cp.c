#include "main.h"
#include <stdio.h>
/**
 * cp-copies the content of a file to another
 * @file_from:original file
 * @file|_to:copied file
 * Return:0success
 **/
int main(int argc, char *argv[])
{
	const char *filefrom = argv[1];
	const char *fileto = (argv[2]);
	int ofile, cfile;
	char BUFF[BUF_SIZE * 8];

	if (argc != 3)
	{
	dprintf(STDOUT_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
	}
	ofile = open(filefrom, O_RDONLY);
	if (!ofile)
	{dprintf(STDOUT_FILENO, "Can't read from file %s\n", filefrom/*argv[1]*/);
	exit(98);
	}
	cfile = open(fileto, O_WRONLY | O_CREAT | O_TRUNC, 0661);
	if (!cfile)
	{
	dprintf(STDOUT_FILENO,"Error: Can't write to %s\n",fileto/* argv[2]*/);
	exit(99);
	}
	(void) BUFF;
	/*read(ofile,&BUFF[0],
	write(cfile,*/
	return (0);
}
