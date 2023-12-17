#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value using jump search
 * @array: pointer to the first elementof the array to search
 * @size: number of elements
 * @value: the value to search for
 * Return: index of the value located Otherwise -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t L = 0, R = sqrt(size);

	if (array == NULL)
		return (-1);

	while (R < size)
	{
		printf("Value checked array[%ld] = [%d]\n", L, array[L]);

		if (!(array[L] < value && array[R] < value))
		{
			printf("Value found between indexes [%ld] and [%ld]\n", L, R);
			while (L <= R)
			{
				printf("Value checked array[%ld] = [%d]\n", L, array[L]);
				if (array[L] == value)
					return (L);
				L++;
			}
			return (-1);
		}
		L = R;
		R += sqrt(size);

	}
	return (-1);
}
