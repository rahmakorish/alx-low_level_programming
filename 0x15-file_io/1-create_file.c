#include "main.h"
/**
 * create_file-create a file
 * @filename:name of created file
 * @text_content:a null terminated string
 * Return:1on success
 **/
int create_file(const char *filename, char *text_content)
{
	int newfile;

	if (filename == NULL || !text_content)
		return (-1);
	newfile = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (!newfile)
		return (-1);
	if (write(newfile, text_content, sizeof(text_content) - 1) == -1)
	{
		perror("write");
		return (-1);
	}
	write(newfile, text_content, sizeof(text_content) - 1);
	if (close(newfile) == -1)
	{
		perror("Close");
		return (-1);
	}
	close(newfile);
	return (1);
}
