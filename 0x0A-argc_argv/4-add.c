#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - entry point
 *
 * @argc: number of arguments
 * @argv: string of the arguments
 * Return: returns 0 if succesful and 1 if otherwise
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i;
	int value;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1 ; i < argc ; i++)
	{
		char *num = argv[i];
		int j = 0;

		while (num[j] != '\0')
		{
			if (!isdigit(num[j]))
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		value = atoi(num);

		sum += value;
	}
	printf("%d\n", sum);
	return (0);
}
