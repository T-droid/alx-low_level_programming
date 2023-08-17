#include "lists.h"

/**
 * get_dnodeint_at_index - gets node at a given index
 * @head: pointer to the first address
 * @index: position of the node
 * Return: addres of the node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *ptr;

	if (head == NULL)
		return (NULL);
	ptr = head;
	while (ptr != NULL)
	{
		if (count == index)
			return (ptr);
		count++;
		ptr = ptr->next;
	}
	return (NULL);
}
