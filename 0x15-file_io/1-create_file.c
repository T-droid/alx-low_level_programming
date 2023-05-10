#include <stdio.h>
#include "main.h"

/**
 * create_file - creates file and inputs data
 * @filename: file to be created
 * @text_content: data to be inserted
 * Return: 1 on succes and -11 if failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, wr;

	if (filename == NULL)
	{
		return (-1);
	}

	if (access(filename, F_OK) == -1)
	{
		fd = open(filename, O_WRONLY | O_CREAT, 0600);
		if (fd == -1)
			return (-1);
	}
	else
	{
		fd = open(filename, O_WRONLY | O_TRUNC);
		if (fd == -1)
			return (-1);
	}

	if (text_content != NULL)
	{
		wr = write(fd, text_content, strlen(text_content));
		if (wr == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
