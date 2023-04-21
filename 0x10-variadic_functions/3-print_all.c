#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_all - function that prints anything
 * @format: types of arguments
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char c;
	int ival;
	float fval;
	char *sval;

	va_start(args, format);

	while (format && format[i])
	{
		c = format[i++];

		switch (c)
		{
			case 'c':
				ival = va_arg(args, int);
				printf("%c", (char) ival);
				break;
			case 'i':
				ival = va_arg(args, int);
				printf("%d", ival);
				break;
			case 'f':
				fval = va_arg(args, double);
				printf("%f", fval);
				break;
			case 's':
				sval = va_arg(args, char *);
				if (sval == NULL)
					printf("(nil)");
				else
					printf("%s", sval);
				break;
			default:
				continue;
		}
		if (format[i])
			printf(", ");
	}
	va_end(args);
	printf("\n");
}
