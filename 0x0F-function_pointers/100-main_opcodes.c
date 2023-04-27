#include <stdio.h>
#include <stdlib.h>
/**
 * print_opcodes - prints the opcodes
 * @num_bytes: number of bytes
 * Return: always 0
 */
void print_opcodes(int num_bytes)
{
	char *function_address = (char *)&print_opcodes;
	int i;

	for (i = 0 ; i < num_bytes ; i++)
		printf("%02x", *(function_address + i) & 0xFF);
	printf("\n");
}

/**
 * main - entry point
 * @argc: counts the number of arguments
 * @argv: store string commands
 * Return: returns 1 and 2 on error
 */
int main(int argc, char *argv[])
{
	int num_bytes;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num_bytes = atoi(argv[1]);
	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}
	print_opcodes(num_bytes);
	return (0);
}