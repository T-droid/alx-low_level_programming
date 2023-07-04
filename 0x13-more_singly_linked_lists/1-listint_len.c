#include "lists.h"

/**
 * listint_len - count the number of elements in alist
 * @h: head pointer
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
