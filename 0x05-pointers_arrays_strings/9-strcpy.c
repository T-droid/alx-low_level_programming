#include "main.h"
#include <stddef.h>

/**
 * char *_strcpy - copies array
 *
 * @dest: destination to be copied
 * @src:destination to copy
 * Return: returns value of dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	if (dest == NULL)
		return (NULL);
	for (i = 0 ; src[i] != '\0' ; i++)
		dest[i] = src[i];
	return (dest);
}
