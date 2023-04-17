#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees the dog
 * @d: parameter
 * Return: void
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);

	free(d);
}
