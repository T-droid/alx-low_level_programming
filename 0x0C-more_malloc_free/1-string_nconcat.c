#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 *
 * @s1: string one to be concatenated
 * @s2: string two to be concanated
 * @n: number of bytes to be allocated
 * Return: returns pointer to the first address of allocated memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t s1len = strlen(s1);
	size_t s2len = strlen(s2);
	char *p;

	if (n > s2len)
		n = s2len;

	p = (char *)malloc(s1len + n + 1);
	if (p == NULL)
		return (NULL);
	strcpy(p, s1);
	strncat(p, s2, n);
	p[s1len + n] = '\0';
	return (p);
}
