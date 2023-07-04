#include "lists.h"

/**
 * print_listint - prints elements of the list
 * @h: head pointer
 * Return: number of node
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
