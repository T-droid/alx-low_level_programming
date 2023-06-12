#include "main.h"
#include <stdlib.h>

/**
 * _strdup - creates a duplicate of a string
 * @str: the string to be duplicated
 * Return: pointe to the new string
 */
char *_strdup(char *str)
{
	int i = 0, count = 0;
	char *ptr;

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		count++;
		i++;
	}
	ptr = (char *)malloc(sizeof(char) * count + 1);
	if (ptr == NULL)
		return (NULL);

	for (i = 0 ; i < count ; i++)
	{
		ptr[i] = str[i];
	}
	ptr[i] = '\0';

	return (ptr);
}
