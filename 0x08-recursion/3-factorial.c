#include "main.h"

/**
 * factorial - gets the factorial of a number
 *
 * @n: number to get its factorial
 * Return: void
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
