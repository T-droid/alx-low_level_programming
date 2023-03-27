#include "main.h"

/**
 * _atoi - checks signs
 *
 * @s: parameter
 * Return: return the sign
 */

int _atoi(char *s)
{
	int result = 0, sign = 1, i = 0;

	while (isspace(str[i]))
	{
		i++;
	}
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
	{
		sign = 1;
		i++;
	}
	while (isdigit(str[i]))
	{
		if (result > INT_MAX / 10 || (result == INT_MAX / 10 && (str[i]) - '0') > INT_MAX % 10))
		{
			return sign == -1 ? INT_MIN : INT_MAX;
		}
	break;
	}
	return sign * result;
}	
