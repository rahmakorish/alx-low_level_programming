#include "main.h"
/**
 * read_textfile-functon that read text file and prints it
 * @filename:file name
 * @letters:number of letters read and printed
 * Return:number of letters
 **/
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *string= " ";
	int file;
       size_t i;

	if (filename == NULL)
		return (0);
	file = open(filename, O_RDWR, 0600);
	if (file == -1)
	{
		perror("open");
		return (0);
	}
	dprintf(file,"opened\n");
	/*for (i = 0; i < letters; i++)
	{string[i] = filename[i];
	}*/
	dprintf(file,"string done");
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
	write(file,string,letters);
	(void)i;
	dprintf(file, "%s", string);
	return (letters);
}
