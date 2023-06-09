#include "main.h"

/**
 * _puts - write character to file
 * @s: string to be written
 * Return: void
 */
void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
