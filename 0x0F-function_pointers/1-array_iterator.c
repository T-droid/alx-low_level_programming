#include "function_pointers.h"
/**
 * array_iterator - function that executes a function
 * @array: array
 * @action: function pointer
 * @size: size of
 * Return: returns NULL
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;
	(void)array;

	for (i = 0 ; i < size ; i++)
	{
		action(array[i]);
	}
}
