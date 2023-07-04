#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at a certain index
 * @head: address to head pointer of the list
 * @index: index of node to be deleted
 * Return: 1 if succesful and -1 if otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *first, *second;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		first = *head;
		*head = (*head)->next;
		free(first);
		return (1);
	}

	first = *head;
	second = first;
	while (second != NULL)
	{
		second = first->next;
		if (count + 1 == index && second != NULL)
		{
			first->next = second->next;
			free(second);
			return (1);
		}
		first = first->next;
		count++;
	}
	return (-1);
}
