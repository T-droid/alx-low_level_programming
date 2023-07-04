#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a node at a given index
 * @head: addres of head pointer
 * @idx: index of node to be added
 * @n: element of the new node
 * Return: address of new node on success
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *first, *second, *ptr;
	unsigned int count = 0;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = NULL;

	if (*head == NULL)
	{
		if (idx == 0)
		{
			*head = ptr;
			return (*head);
		}
		return (NULL);
	}

	if (idx == 0)
	{
		ptr->next = *head;
		*head = ptr;
		return (*head);
	}

	first = *head;
	while (second != NULL)
	{
		second = first->next;
		if (count + 1 == idx)
		{
			if (second == NULL)
			{
				first->next = ptr;
				return (ptr);
			}
			first->next = ptr;
			ptr->next = second;
			return (ptr);
		}
		first = first->next;
		count++;
	}
	return (NULL);
}
