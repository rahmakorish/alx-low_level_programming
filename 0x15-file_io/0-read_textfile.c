#include "main.h"
/**
 * read_textfile-functon that read text file and prints it
 * @filename:file name
 * @letters:number of letters read and printed
 * Return:number of letters
 **/
ssize_t read_textfile(const char *filename, size_t letters)
{
	char string[BUF_SIZE * 8];
	int file;
	ssize_t bufsize;

	if (filename == NULL || !letters)
		return (0);
	file = open(filename, O_RDONLY, 0600);
	if (file == -1)
	{
		perror("open");
		return (0);
	}
	bufsize = read(file, &string[0], letters);
	if (bufsize == -1)
	{	return (0);
	}
	bufsize = write(STDOUT_FILENO, &string[0], bufsize);
	if (bufsize == -1)
	{	return (0);
	}
	close(file);
	return (bufsize);
}
