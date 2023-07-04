#include "lists.h"

/**
 * free_listint2 - frees linked list and sets head to NULL
 * @head: adrres of head pointer
 */
void free_listint2(listint_t **head)
{
	listint_t *p;

	while (*head != NULL)
	{
		p = *head;
		*head = (*head)->next;
		free(p);
	}
}
