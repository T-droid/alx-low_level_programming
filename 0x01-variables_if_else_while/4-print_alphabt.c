#include <stdio.h>

/**
 * main - entry point
 *
 * Return: when successful it returns zero
 */

int main(void)
{
	char i;

	while (i <= 'z')
	{
		if (i != 'q' && i != 'e')
		{
			putchar(i);
		}
	i++;
	}
	putchar('\n');

	return (0);
}
