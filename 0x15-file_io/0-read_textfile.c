#include "main.h"
/**
 * read_textfile-functon that read text file and prints it
 * @filename:file name
 * @letters:number of letters read and printed
 * Return:number of letters
 **/
ssize_t read_textfile(const char *filename, size_t letters)
{char *string = "hello world";
	int file;

	if (filename == NULL)
		return (0);
	file = open(filename, O_RDWR, 0600);
	if (file == -1)
	{
		perror("open");
		return (0);
	}
	if (write(file, string, letters) == -1)
	{
		perror("write");
		return (0);
	}
	dprintf(file, "%s", string);
	if (close(file) == -1)
	{
		perror("close");
		return (0);
	}
	dprintf(STDOUT_FILENO, "%s", string);
	return (letters);
}
