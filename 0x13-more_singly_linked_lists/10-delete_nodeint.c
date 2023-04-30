#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes node at aposition
 * @head: pointer to head pointer
 * @index: position
 * Return: 1 if succesful and -1 if otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr, *current;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		ptr = *head;
		*head = (*head)->next;
		free(ptr);
		return (1);
	}
	ptr = *head;
	while (ptr != NULL)
	{
		current = ptr->next;
		if (index == count + 1)
		{
			ptr->next = current->next;
			free(current);
			return (1);
		}
		ptr = ptr->next;
		count++;
	}
	return (-1);
}
