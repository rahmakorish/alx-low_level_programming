#include "main.h"
/**
 * append_text_to_file-appends text at the end
 * @filename:name of file
 * @text_content:string
 * Return:1onsuccess
 **/
int append_text_to_file(const char *filename, char *text_content)
{
	int file;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_APPEND);
	if (!file)
	{perror("open");
		return (-1);
	}
	write(file, text_content, sizeof(text_content) - 1);
	close(file);
	return (1);
}
