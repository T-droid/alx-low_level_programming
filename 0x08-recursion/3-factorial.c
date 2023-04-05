#include "main.h"

/**
 * factorial - calculates the factorial of given numbers
 *
 * @n: parameter
 * Return: returns factorial
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
