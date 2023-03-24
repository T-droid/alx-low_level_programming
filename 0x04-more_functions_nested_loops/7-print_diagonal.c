#include "main.h"

/**
 * print_diagonal - prints a diagonal line
 *
 * @n: parameter
 * Return: alwways 0
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}

	int i;
	int j;

	for (i = 0 ; i < n ; i++)
	{
		for (j = 0 ; j < i ; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		for (j = 0 ; j < n - i - 1 ; j++)
		{
			_putchar(' ');
		}
		_putchar('\n');
	}
}
