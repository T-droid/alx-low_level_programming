#include "main.h"

/**
 * flip_bits - determines number of flipped bits
 * @n: first number
 * @m: second number
 * Return: number of flipped bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int num = n ^ m;
	unsigned int count = 0;

	while (num != 0)
	{
		count += num & 1;
		num >>= 1;
	}
	return (count);
}
