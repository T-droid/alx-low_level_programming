#include "main.h"

/**
 * print_square - prints the square
 *
 * @size: parameter
 * Return: always 0
 */
void print_square(int size)
{
	int i, j;

	for (i = 1 ; i <= size ; i++)
	{
		for (j = 1 ; j <= size ; j++)
		{
			if (size == 0 && size < 0)
				_putchar('\n');
			else
				_putchar('#');
		}
		_putchar('\n');
	}
}
