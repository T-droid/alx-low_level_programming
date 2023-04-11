#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concatates all strings
 *
 * @ac: parameter
 * @av: parameter
 * Return: returns NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int position, total_length, i;
	char *result;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	total_length = 0;
	for (i = 0 ; i < ac ; i++)
		total_length += strlen(av[i]) + 1;
	result = malloc(total_length * sizeof(char));
	if (result == NULL)
		return (NULL);
	position = 0;
	for (i = 0 ; i < ac ; i++)
	{
		strcpy(result + position, av[i]);
		position += strlen(av[i]);
		result[position++] = '\n';
	}
	return (result);
}
