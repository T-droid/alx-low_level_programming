#include "main.h"
#include <stdlib.h>

/**
 * main - entry point
 * @ac: argument count
 * @av: array of arguments
 * Return: always 0
 */
int main(int ac, char **av)
{
	int i = 1, j, k;
	char *s, *p;

	if (ac != 3)
	{
		p = "Error";
		while (*p != '\0')
			_putchar(*p++);
		_putchar('\n');
		exit(98);
	}
	while (av[i])
	{
		p = av[i];
		for (j = 0 ; p[j] != '\0' ; j++)
		{
			if (!(p[j] >= '0' && p[j] <= '9'))
			{
				s = "Error";
				while (*s != '\0')
				{
					_putchar(*s);
					s++;
				}
				_putchar('\n');
				exit(98);
			}
		}
		i++;
	}
	i = atoi(av[1]);
	j = atoi(av[2]);
	k = j * i;
	_putchar('0' + k);
	return (0);
}
