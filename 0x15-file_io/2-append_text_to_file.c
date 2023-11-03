#include "main.h"
/**
 * _strlen-retrn length of input
 * @str:string needed
 * Return:length of string
 **/
int _strlen(char *str)
{
	int count = 0;

	if (str == NULL)
		return (0);
	while (*str++)
	count++;
	return (count);
}
/**
 * append_text_to_file-appends text at the end
 * @filename:name of file
 * @text_content:string
 * Return:1onsuccess
 **/
int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	ssize_t bytes = 0, len = _strlen(text_content);

	if (filename == NULL)
		return (-1);
	file = open(filename, O_RDWR | O_APPEND, 0661);
	if (file == -1)
	{
		return (-1);
	}
	if (len)
	bytes = write(file, text_content, len);
	
	close(file);
	return (bytes == len ? 1 : -1);
}
