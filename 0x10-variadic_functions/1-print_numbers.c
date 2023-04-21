#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: string to be printed between the numbers
 * @n: number of numbers to printed
 * Return: NULL
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int arg;

	va_start(args, n);
	for (i = 0 ; i < n ; i++)
	{
		arg = va_arg(args, int);
		printf("%d", arg);

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
