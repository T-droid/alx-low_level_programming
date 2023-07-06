#include "main.h"

/**
 * clear_bit - sets bit at index to 0
 * @n: addres of the number
 * @index: position of the number
 * Return: 1 if succes -1 otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num = 1;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	num <<= index;
	*n &= ~num;
	return (1);
}
