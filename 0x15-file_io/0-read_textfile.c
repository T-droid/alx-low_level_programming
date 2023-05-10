#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>
/**
 * read_textfile - reads file and prints it to standard output
 * @filename: filename
 * @letters: number of letters
 * Return: 0 if unsuccesful and letters if other wise
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, rd;
	char *buf = malloc(letters + 1);

	if (buf == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	rd = read(fd, buf, letters);
	if  (rd < 0)
	{
		close(fd);
		return (0);
	}
	buf[rd] = '\0';

	if (write(STDOUT_FILENO, buf, rd) != rd)
	{
		close(fd);
		return (0);
	}

	close(fd);

	printf("%s", buf);
	return (rd);
}
