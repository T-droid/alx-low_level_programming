#include <stdio.h>

/**
 * main - entry point
 *
 * Return: returns 0
 */

int main(void)
{
	int i, j, k;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = i + 1 ; j < 10 ; j++)
		{
			for (k = j + 1 ; j < 10 ; j++)
			{
				putchar (i + '0');
				putchar (j + '0');
				putchar (k + '0');
				if (i == 9 && j == 8 && k == 7)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}

	return (0);
}
