#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: aalways 0
 */
int main(int argc, char *argv[])
{
	int i, j;

	if (argc != 3)
	{
		printf("Error\n");
		return (-1);
	}
	i = atoi(argv[1]);
	j = atoi(argv[2]);
	printf("%d\n", (i * j));
	return (0);
}
