#include "main.h"
#define MAX 1034
/**
 * read_textfile - reads a text file
 * @filename: the name of the file tobe read
 * @letters: number of bytes to be read and printed
 * Return: the number of bytes read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char buffer[MAX];
	int fd;
	ssize_t bytesread, byteswritten;

	if (filename == NULL)
		return (0);
	if (access(filename, F_OK | R_OK) != 0)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	bytesread = read(fd, buffer, letters);
	if (bytesread == -1)
	{
		close(fd);
		return (0);
	}

	byteswritten = write(STDOUT_FILENO, buffer, bytesread);
	if (byteswritten == -1)
	{
		close(fd);
		return (0);
	}
	close(fd);
	return (byteswritten);
}
