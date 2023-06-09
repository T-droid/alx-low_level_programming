#include "main.h"

/**
 * _memset - fill ablock of memory with a specific value
 * @s: starting addres of memory to be filled
 * @b: desired value
 * @n: number of bytes to be changed
 * Return: changed array with new value
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0 ; n > 0 ; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
