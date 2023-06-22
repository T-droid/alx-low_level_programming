#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: separates the string
 * @n: number of arguments
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list argu;
	unsigned int i;
	char *str;

	va_start(argu, n);
	for (i = 0 ; i < n ; i++)
	{
		str = va_arg(argu, char*);
		if (str == NULL)
			printf("(nil)");
		printf("%s", str);
		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(argu);
}
