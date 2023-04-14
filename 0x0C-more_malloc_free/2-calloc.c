#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory to an array
 *
 * @nmemb: number elements in the array
 * @size: byte size of each element
 * Return: returns pointer to the address of the allocated space
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = calloc(nmemb, size);

	if (ptr == NULL)
		return (NULL);
	return (ptr);
}
