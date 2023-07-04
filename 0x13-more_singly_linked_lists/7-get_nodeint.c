#include "lists.h"

/**
 * get_nodeint_at_index - locates a node at a certain index
 * @head: head pointer of the list
 * @index: location of the node
 * Return: address of the node at index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *p = head;
	unsigned int count = 0;

	while (p != NULL)
	{
		if (count == index)
			return (p);
		p = p->next;
		count++;
	}
	return (NULL);
}
