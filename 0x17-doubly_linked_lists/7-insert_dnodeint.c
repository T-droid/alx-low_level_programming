#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node at index
 * @h: pointer to the head pointer
 * @idx: index to insert new node
 * @n: data for new node
 * Return: address of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *ptr, *temp;
	unsigned int count = 0;

	ptr = malloc(sizeof(dlistint_t));
	if (ptr == NULL)
		return (NULL);

	ptr->n = n;
	ptr->prev = NULL;
	ptr->next = NULL;

	if (*h == NULL)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));

	temp = *h;
	while (temp)
	{
		if (count + 1 == idx)
		{
			if (temp->next == NULL)
				add_dnodeint_end(h, n);
			else
			{
				ptr->prev = temp;
				ptr->next = temp->next;
				temp->next->prev = ptr;
				temp->next = ptr;
			}
			return (ptr);
		}
		count++;
		temp = temp->next;
	}
	return (NULL);
}
