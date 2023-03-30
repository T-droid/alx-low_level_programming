#include "main.h"

/**
 * _strncat - concatenates two strings
 *
 * @dest: parameter
 * @src: parameter
 * @n: parameter
 * Return: always 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int destlen = 0;

	for (i = 0 ; dest[i] != '\0' ; i++)
		destlen++;
	for (i = 0 ; i < n ; i++)
		dest[destlen + i] = src[i];
	return (dest);
}
