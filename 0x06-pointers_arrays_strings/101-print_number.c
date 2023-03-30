#include "main.h"

/**
 * print_number - prints an integer
 *
 * @n: parameter
 * Return: return nothing
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n > 9)
	{
		print_integer(n / 10);
	}
	_putchar(n % 10 + '0');
}
