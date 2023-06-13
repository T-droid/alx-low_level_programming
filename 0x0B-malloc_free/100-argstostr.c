#include <stdlib.h>
#include "main.h"

/**
 * argstostr - concatenates all the arguments
 *
 * @ac: arguments number
 * @av: array of arguments
 * Return: NULL if failure and pointer to the new string
 */
char *argstostr(int ac, char **av)
{
	int j, k = 0, i;
	char *ptr, *str;
	int len = 0, count;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0 ; i < ac ; i++)
	{
		count = _strlen(av[i]);
		len += count;
	}

	ptr = (char *)malloc(sizeof(char) * len + ac);
	if (ptr == NULL)
		return (NULL);
	for (i = 0 ; i < ac ; i++)
	{
		str = av[i];
		for (j = 0 ; str[j] != '\0' ; j++)
		{
			ptr[k++] = str[j];
		}
		ptr[k++] = '\n';
	}
	return (ptr);
}

/**
 * _strlen - calculates the length of a string
 * @str: string to be calculated
 * Return: the length
 */
int _strlen(char *str)
{
	int count = 0, i;

	for (i = 0 ; str[i] != '\0' ; i++)
		count++;
	return (count);
}
