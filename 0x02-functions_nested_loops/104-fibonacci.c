#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0
 */

int main(void)
{
	int a = 1, b = 2, c, count = 2;

	printf("%d, %d, ", a, b);

	while (count < 98)
	{
		c = a + b;
		a = b;
		b = c;
		printf("%d", c);
		if (count < 97)
		{
			printf(", ");
		}
		else
		{
			printf("\n");
		}
		count++;
	}
	return (0);
}
