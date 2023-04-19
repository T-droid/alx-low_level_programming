#include "main.h"

/**
 * more_numbers - prints ten times the number
 *
 * Return: always 0
 */
void more_numbers(void)
{
	int i, j, num;

	for (i = 0 ; i <= 9 ; i++)
	{
		for (j = 0 ; j <= 14 ; j++)
		{
			num = i * 15 + j;
			if (num < 100)
			{
				_putchar(num / 10 + '0');
				_putchar(num % 10 + '0');
			}
			else
			{
				_putchar('1');
				_putchar(num % 10 + '0');
			}
			_putchar(j == 14 ? '\n' : ' ');
		}
	}
}
