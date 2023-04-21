#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - prints strings
 * @separator: separates strings
 * @n: number of arguments
 * Return: NULL
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	const char *arg;

	va_start(args, n);
	for (i = 0 ; i < n ; i++)
	{
		arg = va_arg(args, const char *);
		if (arg == NULL)
			printf("nil");
		printf("%s", arg);
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
}
