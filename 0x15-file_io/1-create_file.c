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
 * create_file-create a file
 * @filename:name of created file
 * @text_content:a null terminated string
 * Return:1on success
 **/
int create_file(const char *filename, char *text_content)
{
	int newfile;
	size_t byte = 0, len = _strlen(text_content);

	if (filename == NULL || !text_content)
		return (-1);
	newfile = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (newfile == -1)
		return (-1);
	if (len)
	byte = write(newfile, text_content, len);
	close(newfile);
	return (byte == len ? 1 : -1);
}
