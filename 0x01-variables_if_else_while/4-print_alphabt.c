#include <stdio.h>

/**
 * main - entry point
 *
 * Return: when successful it returns zero
 */

int main(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		if (i != 'e' && i != 'q')
		{
			putchar(i);
		}
		i++;
	}
	putchar('\n');

	return (0);
}
