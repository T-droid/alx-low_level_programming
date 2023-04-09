#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * @argv: stores array of string arguments
 * @argc: stores the number of arguments passed
 * Return: always 0 if succesful
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
