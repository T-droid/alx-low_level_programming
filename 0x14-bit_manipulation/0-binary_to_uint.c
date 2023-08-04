#include "main.h"

/**
 * binary_to_uint - converst binary to unsigned int
 * @b: string of binary bits
 * Return: converted unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0;

	if (b == NULL)
		return (0);
	while (*b != '\0')
	{
		number <<= 1;
		if (*b == '1')
			number |= 1;
		else if (!(*b >= '0' && *b <= '9'))
			return (0);
		b++;
	}
	return (number);
}
