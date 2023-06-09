#include <stdio.h>

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: array of the arguments
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i = 0;

	(void) argc;

	while (argv[i])
		printf("%s\n", argv[i++]);
	return (0);
}
