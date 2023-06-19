#include "dog.h"

dog_t tindi;
/**
 * new_dog - creates a new dog data type
 * @name: name of the new dog
 * @age: age of the new dog
 * @owner: new owner
 * Return: the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	tindi.name = name;
	tindi.age = age;
	tindi.owner = owner;

	return (&tindi);
}
