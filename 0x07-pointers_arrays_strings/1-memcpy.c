#include "main.h"

/**
 * _memcpy - copies n bytes from memory area scr to dest
 *
 * @dest: parameter
 * @src: parameter
 * @n: parameter
 * Return: returns the value of char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
		*(dest + i) = *(src + i);
	return (dest);
}
