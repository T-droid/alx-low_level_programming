#include "search_algos.h"

/**
 * interpolation_search - searches an array using interpolation algorithm
 * @array: pointer to the first element of the array to search in
 * @size: size of the array
 * @value: value to search
 * Return: index of the value Otherwise -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1;
	size_t pos;

	while ((array[high] != array[low]) && (value >= array[low]) && (value <= array[high]))
	{
		pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		if (array[pos] < value)
			low = pos + 1;

		else if (value < array[pos])
			high = pos - 1;

		else
			return (pos);
	}

	if (value == array[low])
		return (low);
	else
	{
		printf("Value checked array[2109] is out of range\n");
		return (-1);
	}
}
