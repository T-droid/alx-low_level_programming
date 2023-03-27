#include "main.h"

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

	for (i = 0 ; src[i] != '\0' ; i++)
		dest[i] = src[i];
	return (dest);
}
