#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - prints any thing
 * @format: data tyoe of the argument
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	const char *ip = format, *ptr;
	int i;
	char c;
	char *str;
	float f;

	va_start(args, format);
	while (*ip != '\0')
	{
		ptr = ip;
		switch (*ip)
		{
			case 'c':
				c = va_arg(args, int);
				printf("%c", c);
				break;
			case 'i':
				i = va_arg(args, int);
				printf("%d", i);
				break;
			case 'f':
				f = va_arg(args, double);
				printf("%2f", f);
				break;
			case 's':
				str = va_arg(args, char*);
				if (str == NULL)
					printf("(nil)");
				printf("%s", str);
				break;
			default:
				break;
		}
		if ((*ip == 'c' || *ip == 'i' || *ip == 'f' || *ip == 's') && *(ptr + 1) != '\0')
			printf(", ");
		ip++;
	}
	printf("\n");
	va_end(args);
}
