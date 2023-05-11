#include <stdio.h>
#include <stddef.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

void copy_file(const char *file_from, const char *file_to);
/**
 * main - entry point
 *
 * @argc: counts the number of arguments
 * @argv: holds the string of the arguments
 * Return: always 0
 */
int main(int argc, char **av)
{
	if (argc != 3)
	{
		dprintf(2, "Usage:cp file_from file_to\n");
		exit(97);
	}
	copy_file(av[1], av[2]);
	return (0);
}

/**
 * copy_file - copies content from one file to another
 * @file_from: file to be copied from
 * @file_to: file to be copied to
 * Return: void
 */
void copy_file(const char *file_from, const char *file_to)
{
	int fd, fd1, rd, wr;
	char buff[1024];

	if (access(file_from, F_OK | R_OK) == -1)
	{
		dprintf(2, "Error: Can't read from %s\n", file_from);
		exit(98);
	}
	fd1 = open(file_from, O_RDONLY);
	if (fd1 == -1)
	{
		exit(98);
	}

	rd = read(fd1, buff, 1024);
	if (rd < 0)
	{
		close(fd1);
		dprintf(2, "Error: Can't read from %s\n", file_from);
		exit(98);
	}
	memset(buff + rd, 0, sizeof(buff) - rd);

	if (close(fd1) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd1);
		exit(100);
	}

	if (access(file_to, F_OK) == -1)
	{
		fd = open(file_to, O_WRONLY | O_CREAT, 664);
		if (fd == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
	}
	else
	{
		fd = open(file_to, O_WRONLY |  O_TRUNC);
		if (fd == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
	}

	wr = write(fd, buff, rd);
	if (wr < 0)
	{
		close(fd);
		dprintf(2, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	if (close(fd) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
