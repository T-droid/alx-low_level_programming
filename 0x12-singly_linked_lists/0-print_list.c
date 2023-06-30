#include "lists.h"

/**
 * print_list - prints all elements of a list_t
 * @h: pointer to the head node
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *ptr = h;
	size_t count = 0;

	while (ptr)
	{
		if (ptr->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", ptr->len, ptr->str);
		count++;
		ptr = ptr->next;
	}
	return (count);
}
