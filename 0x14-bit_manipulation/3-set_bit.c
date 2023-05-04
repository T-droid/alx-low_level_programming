#include "main.h"

/**
 * set_bit - sets bit at a certain position
 * @n: bit to be set
 * @index: position
 * Return: 1 if succesful and -1 if otherwise
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int trev = 1;

	trev <<= index;
	if (n == NULL)
		return (-10);
	*n |= trev;
	return (1);
}