#include "lists.h"

/**
 * reverse_listint - reverses a list
 * @head: pointer to head pointer
 * Return: head pointer
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *nex = NULL;

	if (*head == NULL)
		return (NULL);
	while ((*head)->next != NULL)
	{
		nex = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = nex;
	}
	*head = prev;
	return (*head);
}
