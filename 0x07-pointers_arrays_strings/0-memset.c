#include "main.h"

/**
 * _memset - fills the first n bytes with the constant byte b
 *
 * @s: parameter
 * @b: parameter
 * @n: parameter
 * Return: returns to char
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
		*(s + i) = b;
	return (s);
}
