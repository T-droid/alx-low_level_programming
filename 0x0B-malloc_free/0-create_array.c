#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 *
 * @size: parameter holding size
 * @c: parameter
 * Return: returns chars
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
		return (NULL);

	arr = malloc(size * sizeof(char));

	if (arr == NULL)
		return (NULL);
	for (i = 0 ; i < size ; i++)
		arr[i] = c;
	return (arr);
}
