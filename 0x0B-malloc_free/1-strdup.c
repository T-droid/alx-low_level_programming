#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - returns pointer to a newly allocated space
 *
 * @str: string to be returned
 * Return: returns to apointer
 */
char *_strdup(char *str)
{
	size_t len;
	char *new_str;

	if (str == NULL)
		return (NULL);
	len = strlen(str) + 1;
	new_str = malloc(len);

	if (new_str == NULL)
		return (NULL);
	memcpy(new_str, str, len);
	return (new_str);
}
