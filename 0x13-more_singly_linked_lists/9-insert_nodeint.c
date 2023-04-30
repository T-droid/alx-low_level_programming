#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a new node at a position
 * @head: pointer to head pointer
 * @idx: position to be inserted
 * @n: data of the new node
 * Return: NULL incase of error
 * And if it is immpossible
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr, *current;
	unsigned int count = 0;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = NULL;

	if (idx == 0)
	{
		ptr->next = *head;
		*head = ptr;
		return (*head);
	}
	current = *head;
	while (current != NULL)
	{
		if (idx == count + 1)
		{
			ptr->next = current->next;
			current->next = ptr;
			return (ptr);
		}
		current = current->next;
		count++;
	}
	free(ptr);
	return (NULL);
}
