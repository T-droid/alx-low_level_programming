#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees the dogs
 * @d: dog to be freed
 * Return: void
 */
void free_dog(dog_t *d)
{
	free(d);
}
