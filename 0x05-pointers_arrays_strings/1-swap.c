#include "main.h"

/**
 * swap_int - swaps the values
 *
 * @a: parameter
 * @b: another parameter
 * Return: always 0
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
