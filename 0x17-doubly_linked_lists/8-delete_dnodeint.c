#include "lists.h"

/**
 * delete_dnodeint_at_index - function to delete node at index
 * @head: [pointer to the first node
 * @index: postion to be deleted
 * Return: 1 on success and -1 if otherwise
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *ptr;

	if (*head == NULL)
		return (-1);
	ptr = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(ptr);
		return (1);
	}

	while (ptr)
	{
		if (count == index)
		{
			ptr->prev->next = ptr->next;
			if (ptr->next != NULL)
				ptr->next->prev = ptr->prev;
			free(ptr);
			return (1);
		}
		ptr = ptr->next;
		count++;
	}
	return (-1);
}
