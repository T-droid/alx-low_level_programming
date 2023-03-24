#include "main.h"

/**
 * print_triangle - prints a triangle
 *
 * @size: parameter
 * Return: always 0
 */
void print_triangle(int size)
{
	int i, j, spaces;

	for (i = 1 ; i <= size ; i++)
	{
		for (spaces = size - i ; spaces >= 1 ; spaces--)
		{
			_putchar(' ');
		}
		for (j = 1 ; j <= i ; j++)
		{
			_putchar('#');
		}
	_putchar('\n');
	}
}
