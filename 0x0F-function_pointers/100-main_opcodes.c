#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * printOpcodes - prints opcodes of its main function
 * @bytes: number of bytes to be printed
 * @func: function whose opcodes are to be printed
 * Return: void
 */
void printOpcodes(int bytes, int (*func)(int, char**))
{
	void *ptr = (void *)func;
	unsigned char *opcodes;
	int i;

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	opcodes = (unsigned char *)ptr;

	for (i = 0 ; i < bytes ; i++)
	{
		printf("%02x ", opcodes[i]);
	}
	printf("\n");
}

/**
 * main - entry point
 * @av: array of arguments
 * @ac: argument count
 * Return: always 0
 */
int main(int ac, char **av)
{
	if (ac != 2)
	{
		printf("Error\n");
		exit(1);
	}
	printOpcodes(atoi(av[1]), &main);
	return (0);
}
