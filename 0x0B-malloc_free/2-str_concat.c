#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: string to be concatenated to
 * @s2: string to concatenate
 * Return: pointer to the concanated string
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i, j, count = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = 0;
	while (s1[i] != '\0')
	{
		count++;
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		count++;
		j++;
	}
	ptr = (char *)malloc(sizeof(char) * count + 1);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		ptr[i++] = s2[j];
		j++;
	}
	ptr[i] = '\0';
	return (ptr);
}
