#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - reallocates a memory block using malloc
 *
 * @ptr: pointer to the allocated memory
 * @old_size: old size memory size
 * @new_size: new size memory size
 * Return: returns NULL if unsuccessful
 * And ptr if otherwise
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int copy_size;

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
		return (NULL);

	copy_size = (old_size < new_size) ? old_size : new_size;

	memcpy(new_ptr, ptr, copy_size);

	free(ptr);
	return (new_ptr);
}
