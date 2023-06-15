#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates memory
 * @ptr: pointer to previous memory
 * @old_size: previous memory size
 * @new_size: new memory size to be allocated
 * Return: pointer of the reallocated memory or NULL incase of failure
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;
	char *s, *t;
	unsigned int i;

	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);

	p = malloc(new_size);
	if (p == NULL)
		return (NULL);

	if (ptr == NULL)
		ptr = p;
	else
	{
		s = (char *)p;
		t = (char *)ptr;
		for (i = 0 ; i < new_size && t[i] != '\0' ; i++)
			s[i] = t[i];
		s[i] = '\0';
	}

	free(ptr);
	ptr = p;
	return (ptr);
}
