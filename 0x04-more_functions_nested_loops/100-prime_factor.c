#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0
 */
int main(void)
{
	long long num = 612852475143LL;
	long long factor = 2;
	long long largestFactor = 0;

	while (num > 1)
	{
		if (num % factor == 0)
		{
			num /= factor;
			largestFactor = factor;
		}
		else
		{
			factor++;
		}
	}
	printf("%lld\n", largestFactor);

	return (0);
}
