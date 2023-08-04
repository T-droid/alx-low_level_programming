#include "main.h"

/**
 * get_bit - gets bit at certain index
 * @n: number to be checked
 * @index: position to be checked
 * Return: -1 if unsuccesful
 * And the bit if succesful
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int num = 1;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	num <<= index;

	return ((n & num) ? 1 : 0);
}
