#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always return 0(successful)
 */

int main(void)
{
	int i, j;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = i + 1 ; j < 10 ; j++)
		{
			putchar(i + '0');
			putchar(j + '0');
			if (i == 9 && j == 8)
			{
				break;
			}
			putchar(',');
			putchar(' ');
		}
	}

	return (0);
}
