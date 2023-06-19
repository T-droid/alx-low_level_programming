#include "dog.h"

/**
 * init_dog - initializes dog struct
 * @d: pointer to the variable to be initialized
 * @name: name of the dog
 * @age: age of the dog
 * @owner: string of the owners name
 * Return:  void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
