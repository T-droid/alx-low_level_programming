#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * main - entry point
 * @ac: argument count
 * @av: array of arguments
 * Return: 0 if succesful
 */
int main(int ac, char **av)
{
	int fd, fd1;
	ssize_t rdbytes, wrbytes;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	if (access(av[1], F_OK | R_OK) != 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	fd = open(av[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	rdbytes = read(fd, buffer, sizeof(buffer));
	if (rdbytes == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	if (access(av[2], F_OK) != 0)
	{
		fd1 = open(av[2], O_WROLNY | O_CREAT, 0664);
		if (fd1 == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
	}
	else
	{
		fd1 = open(av[2], O_WRONLY | O_TRUNC);
		if (fd1 == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
	}
	
	wrbytes = write(fd1, buffer, rdbytes);
	if (wrbytes == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
