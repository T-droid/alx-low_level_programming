#include "function_pointers.h"
/**
 * print_name - prints name
 * @name: paramter
 * @f a function pointer to a string containing name
 * Return: NULL
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
