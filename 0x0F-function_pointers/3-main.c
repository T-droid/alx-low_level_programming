#include "function_pointers.h"
#include "3-calc.h"
#include <stdio.h>
#include <string.h>

/**
 * main - entry point
 * @ac: argument count
 * @av: argument array
 * Return: always 0
 */
int main(int ac, char **av)
{
	int (*op)(int, int);

	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (strcmp(av[2], "+") != 0 && strcmp(av[2], "-") != 0 && strcmp(av[2], "/") != 0 && strcmp(av[2], "*") != 0 && strcmp(av[2], "%") != 0)
	{
		printf("Error\n");
		exit(98);
	}
	if (strcmp(av[2], "/") == 0 && strcmp(av[3], "0") == 0)
	{
		printf("Error\n");
		exit(100);
	}
	op = get_op_func(av[2]);
	printf("%d\n", op(atoi(av[1]), atoi(av[3])));

	return (0);
}
