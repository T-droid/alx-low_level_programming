#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always return 0 (successful)
 */

int main(void)
{
	char i;

	for (i = 'z' ; i >= 'a' ; i--)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}
