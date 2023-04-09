#include <stdio.h>

/**
 * main - entry point
 *
 * @argc: counts the number of arguments
 * @argv: stores the array of arguments passed
 * Return: 0 if succesful
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0 ; i < argc ; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
