#include "main.h"

/**
 * clear_bit - sets bot to 0
 * @n: pointer to the number to be manipulated
 * @index: position to be changed
 * Return: 1 if succesfull and -1 if otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n &= ~(1UL << index);
	return (1);
}
