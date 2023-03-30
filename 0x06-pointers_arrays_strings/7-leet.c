#include "main.h"

/**
 * leet - encodes
 *
 * @ptr: parameter
 * Return: returns ptr
 */
char *leet(char *ptr)
{
	int i;
	int j;

	char *a = "aAeEoOtTlL";
	char *b = "4433007711";

	for (i = 0 ; ptr[i] != '\0' ; i++)
	{
		for (j = 0 ; a[j] != '\0' ; j++)
		{
			if (ptr[i] == a[j])
				ptr[i] = b[j];
		}
	}
	return (ptr);
}
