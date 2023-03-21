#include "main.h"

/**
 * _islower - checks for lower cases and upper cases
 *
 * @c: parameter to be printed
 *
 * Return: returns 1 if lower case
 * and 0 otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
