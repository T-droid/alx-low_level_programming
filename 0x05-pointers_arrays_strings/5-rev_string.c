#include "main.h"

/**
 * rev_string - reverse again
 *
 * @s: parameter
 */
void rev_string(char *s)
{
	int i;

	for (i = 10 ; i >= 0 ; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
