#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string to be concatenated to
 * @s2: second string
 * @n: number of bites of s2 to be used
 * Return: pointer to a new allocated memory or NULL if unsuccesful
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr, *str;
	int i = 0, count = 0;
	unsigned int j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
	{
		count++;
		i++;
	}

	ptr = malloc(sizeof(char) * (count + n) + 1);
	if (ptr == NULL)
		return (NULL);

	str = ptr;
	i = 0;
	while (s1[i] != '\0')
	{
		*str = s1[i++];
		str++;
	}

	for (j = 0 ; s2[j] != '\0' && j < n ; j++)
	{
		*str = s2[j];
		str++;
	}
	*str = '\0';

	return (ptr);
}
