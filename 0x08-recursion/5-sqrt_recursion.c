#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of number
 *
 * @n: parameter
 * Return: returns -1 if their is no natural square root
 * And 0 if succefull
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (n);
	else
		return (_sqrt_recursion(n, 1, n / 2));
}
