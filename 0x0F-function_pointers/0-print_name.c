#include "function_pointers.h"

/**
 * print_name - prints name
 * @name: name to be printed
 * @f: function to print name in upper or lowercase
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
