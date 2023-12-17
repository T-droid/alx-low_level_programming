#include "search_algos.h"

/**
 * binary_search - searches a sorted array
 * @array: the pointer to the first element in the search array
 * @size: number of elements in the array
 * @value: the value to search for
 * Return: the index of the value Otherwise -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t L = 0, R = size - 1, mid;

	while (L <= R)
	{
		printarray(array, L, R);
		mid = (L + R) / 2;
		if (value > array[mid])
			L = mid + 1;
		else if (value < array[mid])
			R = mid - 1;
		else
			return (array[mid]);
	}
	return (-1);
}

/**
 * printarray - prints the current array being searched
 * @array: the pointer to the first element in the search array
 * @L: first index of the current array
 * @R: last index of the current array
 */
void printarray(int *array, size_t L, size_t R)
{
	printf("Searching in array: ");
	while (L <= R)
	{
		printf("%d", array[L]);
		if (L != R)
			printf(", ");
		else
			printf("\n");
		L++;
	}
}
