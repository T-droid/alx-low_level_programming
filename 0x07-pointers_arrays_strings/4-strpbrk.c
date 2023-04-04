#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - searches for a string for any of a set of bites
 *
 * @s: parameter
 * @accept: parameter
 * Return: returns s
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *a = accept;

		while (*a != '\0')
		{
			if (*s == *a)
			{
				return (s);
			}
			a++;
		}
		s++;
	}
	return (NULL);
}
