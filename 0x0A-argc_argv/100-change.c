#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argv: array of arguments
 * @argc: number of arguments
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int coins = 0, cents;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);

	while (cents > 0)
	{
		if (cents >= 25)
		{
			cents -= 25;
			coins++;
		}
		else if (cents >= 10)
		{
			cents -= 10;
			coins++;
		}
		else if (cents >= 5)
		{
			cents -= 5;
			coins++;
		}
		else if (cents >= 2)
		{
			cents -= 2;
			coins++;
		}
		else
		{
			cents -= 1;
			coins++;
		}
	}
	printf("%d\n", coins);
	return (0);
}
