#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 *
 * @argc: number of arguments
 * @argv: string of arguments
 * Return: 1 if more than two arguments and 0 otherwise
 */
int main(int argc, char *argv[])
{
	int a, b, result;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	result = a * b;

	printf("%d\n", result);
	return (0);
}
