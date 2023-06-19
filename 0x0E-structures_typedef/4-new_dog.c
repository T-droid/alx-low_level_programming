#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog data type
 * @name: name of the new dog
 * @age: age of the new dog
 * @owner: new owner
 * Return: the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *tindi = malloc(sizeof(dog_t));

	if (tindi == NULL)
		return (NULL);

	tindi->name = name;
	tindi->age = age;
	tindi->owner = owner;

	return (tindi);
}
