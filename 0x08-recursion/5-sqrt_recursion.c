#include "main.h"

/**
 * _sqrt_recursion - find the natural square root of a number
 * @n: the number to find the natural sqaure root of
 *
 * Return: the natural square root of n, or -1 if n does not have
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_helper(n, 0));
}

/**
 * _sqrt_helper - helper function for _sqrt_recursion
 * @n: the number to find the natural square root of
 * @i: the current integer being checked
 *
 * Return: the natural square root of n, or -1 if n does not have
 */
int _sqrt_helper(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i > n)
		return (-1);
	else
		return (_sqrt_helper(n, i + 1));
}
