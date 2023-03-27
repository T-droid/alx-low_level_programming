#include "main.h"

/**
 * print_rev - prints in reverse
 *
 * @s: parameter
 */
void print_rev(char *s)
{
	int i;
	int count = 0;
	int j;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		count++;
	}
	for (j = count ; j >= 0 ; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
