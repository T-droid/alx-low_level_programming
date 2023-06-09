#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int sum = 0, i = 1, j;
	char *current;

	(void) argc;

	while (argv[i])
	{
		current = argv[i];
		for (j = 0 ; current[j] != '\0' ; j++)
		{
			if (!(current[j] >= '0' && current[j] <= '9'))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
