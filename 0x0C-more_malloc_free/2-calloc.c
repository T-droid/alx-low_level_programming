#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory to an array
 * @nmemb: no of elements of the array
 * @size: size of each element
 * Return: pointer to the newly allocated space or NULL if unsuccesful
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size + 1);
	if (ptr == NULL)
		return (NULL);
	for (i = 0 ; i < nmemb ; i++)
		ptr[i] = 0;
	ptr[i] = '\0';

	return (ptr);
}
