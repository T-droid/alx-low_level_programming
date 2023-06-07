#include "main.h"
#include <math.h>

/**
 * is_prime_number_helper - checks if a number is prime recursively
 * @n: the number to be checked
 * @i: the current divisor being tested
 *
 * Return: 1 if it is prime, 0 otherwise
 */
int is_prime_number_helper(int n, int i)
{
	if (n <= 1)
		return (0);
	if (i == 1)
		return (1);
	if (n % i == 0)
		return (0);
	return (is_prime_number_helper(n, i - 1));
}

/**
 * is_prime_number - returns i if it is a prime number
 *
 * @n: the number to be checked
 * Return: 1 if it is not a prime number
 * otherwise zero is returned
 */
int is_prime_number(int n)
{
	return (is_prime_number_helper(n, (int) sqrt(n)));
}
