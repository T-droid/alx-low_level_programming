#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in an array
 * @value: the value to search for
 * Return: the first index where the value is located
 * Otherwise return -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0 ; i < size ; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}


/**
 * _strcmp - compares two strings
 *
 * @s1: parameter
 * @s2: parameter
 * Return: returns s1
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0 ; s1[i] != '\0' || s2[i] != '\0' ; i++)
	{
		if (s1[i] != s2[i])
		{
			if (s1[i] < s2[i])
				return (s1[i] - s2[i]);
			else
				return (s1[i] - s2[i]);
		}
		else
			return (0);
	}
	return (0);
}
