#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - sum variable number of integers
 *
 * @n: fixed number of arguments
 * Return: 0 if successful
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int sum = 0, arg;

	if (n == 0)
		return (0);
	va_start(args, n);
	for (i = 0 ; i < n ; i++)
	{
		arg = va_arg(args, int);
		sum += arg;
	}
	va_end(args);
	return (sum);
}
