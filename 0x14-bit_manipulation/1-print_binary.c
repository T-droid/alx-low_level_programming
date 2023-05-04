#include "main.h"
#include <string.h>
/**
 * print_binary - prints binary
 * @n: test number
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int temp = 1;
	int count = 0;

	if (n == '0')
		_putchar('0');
	while ((n >> count) != 0)
		count++;
	temp <<= (count - 1);

	while (temp != 0)
	{
		_putchar(n & temp ? '1' : '0');
		temp >>= 1;
	}
}
