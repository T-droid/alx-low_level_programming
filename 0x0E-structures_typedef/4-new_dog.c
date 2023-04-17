#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - creates new dog
 * @name: name of the new dog
 * @age: age of the new dog
 * @owner: owner of the new dog
 * Return: returns dot_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int name_len, owner_len;
	dog_t *new_dog_ptr;

	new_dog_ptr = malloc(sizeof(dog_t));
	if (new_dog_ptr == NULL)
		return (NULL);
	name_len = strlen(name) + 1;
	new_dog_ptr->name = malloc(name_len);
	if (new_dog_ptr->name == NULL)
	{
		free(new_dog_ptr);
		return (NULL);
	}
	strcpy(new_dog_ptr->name, name);

	owner_len = strlen(owner) + 1;
	new_dog_ptr->owner = malloc(owner_len);
	if (new_dog_ptr->owner == NULL)
	{
		free(new_dog_ptr->name);
		free(new_dog_ptr);
		return (NULL);
	}
	strcpy(new_dog_ptr->owner, owner);
	new_dog_ptr->age = age;
	return (new_dog_ptr);
}
