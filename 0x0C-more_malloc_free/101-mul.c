#include "main.h"
#include <stdlib.h>

/**
 * main - entry point
 * @argc: argument count
 * @argv: array of arguments
 * Return: always 0
 */
int main(int argc, char **argv)
{
	int i, j, k;

	if (argc != 3)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		exit(98);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!(argv[i][j] >= '0' && argv[i][j] <= '9'))
			{
				_putchar('E');
				_putchar('r');
				_putchar('r');
				_putchar('o');
				_putchar('r');
				_putchar('\n');
				exit(98);
			}
		}
	}
	i = atoi(argv[1]);
	j = atoi(argv[2]);
	k = i * j;
	printInteger(k);
	_putchar('\n');

	return (0);
}

/**
 * printInteger - print integer using putchar
 * @num: the integer to be printed
 * Return: void
 */
void printInteger(int num)
{
	int reverseNum, digit;

	if (num == 0)
	{
		_putchar('0');
		return;
	}
	if (num < 0)
	{
		_putchar('-');
		num = -num;
	}

	reverseNum = 0;
	while (num > 0)
	{
		reverseNum = reverseNum * 10 + num % 10;
		num /= 10;
	}

	while (reverseNum > 0)
	{
		digit = reverseNum % 10;
		if (digit == 0)
			_putchar('0');
		else
			_putchar('0' + digit);
		reverseNum /= 10;
	}
}
