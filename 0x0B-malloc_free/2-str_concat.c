#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concanates
 *
 * @s1: string 1
 * @s2:string two
 * Return: returns pointer result
 */
char *str_concat(char *s1, char *s2)
{
	size_t len1;
	size_t len2;
	char *result;

	len1 = strlen(s1);
	len2 = strlen(s2);

	result = malloc(len1 + len2 + 1);
	if (result == NULL)
		return (NULL);

	memcpy(result, s1, len1);
	memcpy(result + len1, s2, len2);
	result[len1 + len2] = '\0';

	return (result);
}
