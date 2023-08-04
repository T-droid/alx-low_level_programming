#include "main.h"

/**
 * get_endianness - detects the endiannes
 * Return: 0 if big endian and 1 if otherwise
 */
int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char *)&x;

	if (*c)
		return (1);
	return (0);
}
