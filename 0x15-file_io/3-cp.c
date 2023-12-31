#include "main.h"
#include <stdio.h>
/**
 * main-copies the content of a file to another
 * @argc:argument count
 * @argv:argument vector
 * Return:0success
 **/
int main(int argc, char *argv[])
{
	const char *filefrom = argv[1];
	const char *fileto = (argv[2]);
	int ofile, cfile;
	size_t count = 0, need = 10000000000;
	char *BUFF[BUF_SIZE * 8];

	if (argc != 3)
	{
	dprintf(STDOUT_FILENO, "Usage: cp file_from file_to\n"),
	exit(97);
	}
	ofile = open(filefrom, O_RDONLY);
	if (ofile == -1)
	{dprintf(STDOUT_FILENO, "Can't read from file %s\n", argv[1]),
	exit(99);
	}

	cfile = open(fileto, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (!cfile)
	{
	dprintf(STDOUT_FILENO, "Error: Can't write to %s\n", argv[2]),
	exit(99);
	}
	count = read(ofile, &BUFF[0], need);
	count = write(cfile, &BUFF[0], count);
	
	ofile = close(ofile);
	cfile = close(cfile);
	if (ofile)
	{
		dprintf(STDOUT_FILENO, "Error: Can't close fd FD_VALUE\n"),
				exit(100);
	}
	return (0);
}
