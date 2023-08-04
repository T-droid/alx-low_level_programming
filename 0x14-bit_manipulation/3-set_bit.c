#include "main.h"

/**
 * set_bit - sets bit at index
 * @n: numbber to be checked
 * @index: position to be changed
 * Return: 1 if succesfull and -1 if otherwise
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num = 1;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	num <<= index;
	*n |= num;
	return (1);
}
