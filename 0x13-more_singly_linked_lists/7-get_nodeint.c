#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - gets the nth node
 * @head: head pointer
 * @index: number of the node
 * Return: the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;

	while (head != NULL)
	{
		if (count == index)
			return (head);
		head = head->next;
		count++;
	}
	return (NULL);
}
