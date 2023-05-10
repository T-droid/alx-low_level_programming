#include "main.h"
#include <stdio.h>

/**
 * append_text_to_file - function to append file
 * @filename: pointer to file name
 * @text_content: content to be appended
 * Return: 1 if successful and -1 if otherwise
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wr;

	if (filename == NULL)
		return (-1);

	if (access(filename, F_OK | W_OK) == -1)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		wr = write(fd, text_content, strlen(text_content));
		if (wr < 0)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
