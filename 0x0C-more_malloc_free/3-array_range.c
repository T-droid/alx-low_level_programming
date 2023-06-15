#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimal integer
 * @max: maximum integer
 * Return: pointer to allocated memory
 */
int *array_range(int min, int max)
{
	int *ptr;
	int len, i;

	if (min > max)
		return (NULL);
	len = max - min + 1;

	ptr = malloc(sizeof(int) * len + 1);
	if (ptr == NULL)
		return (NULL);
	for (i = 0 ; min <= max ; i++)
		ptr[i] = min++;
	ptr[i] = '\0';

	return (ptr);
}
