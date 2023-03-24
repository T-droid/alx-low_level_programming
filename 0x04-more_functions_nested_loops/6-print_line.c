#include "main.h"

/**
 * print_line - prints line
 *
 * @n: parameter to be checked
 * Return: always 0
 */
void print_line(int n)
{
	int i;

	for (i = 0 ; i <= n ; i++)
	{
		if (n <= 0)
			_putchar('\n');
		else
			_putchar('_');
	}
}
