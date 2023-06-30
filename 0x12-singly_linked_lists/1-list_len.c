#include "lists.h"

/**
 * list_len - finds the number of elements in a linked list
 * @h: head pointer
 * Return: the number of elements
 */
size_t list_len(const list_t *h)
{
	const list_t *ptr = h;
	size_t count = 0;

	while (ptr)
	{
		if (ptr->str != NULL)
		{
			count++;
		}
		ptr = ptr->next;
	}
	return (count);
}
