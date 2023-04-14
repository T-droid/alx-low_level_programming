#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates n array of integers
 *
 * @min: the minimum possible element
 * @max: the maximumm possible element
 * Return: returns NULL if unsuccessful
 * And pointer to the allocated space if otherwise
 */
int *array_range(int min, int max)
{
	int size, i, *arr;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	arr = malloc(size * sizeof(int));

	if (arr == NULL)
		return (NULL);
	for (i = 0 ; i < size ; i++)
		arr[i] = min + i;
	return (arr);
}
