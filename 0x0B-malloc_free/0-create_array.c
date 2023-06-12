#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * create_array - creates an array of chars
 * @size: size to be allocated for each char
 * @c: character
 * Return: pointer to the allocated memory
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	if (size == 0)
		return (NULL);

	ptr = (char *)malloc(sizeof(char) * size);
	if (ptr == NULL)
		return (NULL);

	for (i = 0 ; i < size ; i++)
		ptr[i] = c;
	return (ptr);
}
