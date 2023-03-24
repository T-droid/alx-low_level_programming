#include "main.h"

/**
 * print_diagonal - prints a diagonal line
 *
 * @n: parameter
 * Return: alwways 0
 */
void print_diagonal(int n)
{
	int i;

	for (i = 0 ; i <= n ; i++)
	{
		if (n == 0 && n < 0)
			_putchar('\n');
		else
			_putchar('\\');
	}
}
