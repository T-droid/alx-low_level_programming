#include "function_pointers.h"

/**
 * array_iterator - executes an action on each array element
 * @array: the array
 * @size: the size of the array
 * @action: function to apply on each element
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0 ; i < size ; i++)
		action(array[i]);
}
