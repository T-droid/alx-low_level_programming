#include "lists.h"

/**
 * listint_len - number of linked elements
 *
 * @h: head pointer
 * Return: returns number of nodes
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;
	const listint_t *ptr = h;

	if (ptr == NULL)
		return (1);
	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}
