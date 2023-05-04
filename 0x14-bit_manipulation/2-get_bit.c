#include "main.h"

/**
 * get_bit - get a bit at a given index
 * @n: the binary to be checked
 * @index: the position
 * Return: index and -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int temp;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	temp = 1;
	temp <<= index;
	return ((n & temp) ? 1 : 0);
}
