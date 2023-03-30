#include "main.h"

/**
 * string_toupper - changes lower case to upper
 *
 * @ptr: parameter
 * Return: returns ptr
 */
char *string_toupper(char *ptr)
{
	int i;

	for (i = 0 ; ptr[i] != '\0' ; i++)
	{
		if (ptr[i] >= 'a' && ptr[i] <= 'z')
			ptr[i] = ptr[i] - 32;
	}
	return (ptr);
}
