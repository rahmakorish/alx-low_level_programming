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

	if (filename == NULL)
		return (-1);
	newfile = open(filename, O_CREAT | O_WRONLY, 0600);
	if (!newfile)
	{perror("open");
		return (-1);
	}
	write(newfile, text_content, sizeof(text_content) - 1);
	close(newfile);
	return (1);
}
