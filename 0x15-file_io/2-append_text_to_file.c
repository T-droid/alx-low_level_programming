#include "main.h"

/**
 * append_text_to_file - adds text at the end of a file
 * @filename: file to be appended
 * @text_content: content to append
 * Return: 1 on succes and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, length = 0;
	ssize_t wrbyts;

	if (filename == NULL)
		return (-1);
	if (access(filename, F_OK | W_OK) != 0)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
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

