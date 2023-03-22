#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0
 */

int main(void)
{
	int prev1 = 1, prev2 = 2, curr = 3;
	int sum = 2;

	while (curr <= 4000000)
	{
		if (curr % 2 == 0)
		{
			sum += curr;
		}
		prev1 = prev2;
		prev2 = curr;
		curr = prev1 + prev2;
	}
	printf("%d\n", sum);

	return (0);
}
