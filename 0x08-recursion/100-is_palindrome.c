#include "main.h"

/**
 * is_palindrome - checks for a palindrome
 *
 * @s: parameter
 * Return: return 1 if string is palindrome
 * And 0 if otherwise
 */
int is_palindrome(char *s);

int is_palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] != s[end])
		return (0);
	return (is_palindrome_helper(s, start + 1, end - 1));
}
