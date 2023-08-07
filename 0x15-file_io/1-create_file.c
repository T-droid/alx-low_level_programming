#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file to be created
 * @text_content: content to be put into the created file
 * Return: 1 on succes and -1 if falure
 */
int create_file(const char *filename, char *text_content)
{
	int acc, fd;
	ssize_t wrbyts;
	size_t length = 0;

	if (filename == NULL)
		return (-1);
	acc = access(filename, F_OK | W_OK);
	if (acc == 0)
	{
		fd = open(filename, O_WRONLY | O_TRUNC);
		if (fd == -1)
			return (-1);
	}
	else
	{
		fd = open(filename, O_WRONLY | O_CREAT, 0600);
		if (fd == -1)
			return (-1);
	}

	if (text_content != NULL)
	{
		while (text_content[length] != '\0')
			length++;
		wrbyts = write(fd, text_content, length);
		if (wrbyts == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
