#include "function_pointers.h"

/**
 * int_index - looks for an integer in an array
 * @array: array to be searched into
 * @size: the size of tha array
 * @cmp: function to compare elements
 * Return: index of the element if succesful or -1 if otherwise
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, j;

	if (size <= 0)
		return (-1);
	for (i = 0 ; i < size ; i++)
	{
		j = cmp(array[i]);
		if (j != 0)
			return (i);
	}
	return (-1);
}
