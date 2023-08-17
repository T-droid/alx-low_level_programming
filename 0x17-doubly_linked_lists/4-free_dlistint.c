#include "lists.h"

/**
 * free_dlistint - function to free a linked list
 * @head: pointer to the first node of the list
 */
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;

	while (head->next)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
	head = NULL;
}
