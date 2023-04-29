#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a node
 * @head: pointer to a head pointer
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *current, *del;

	del = *head;
	while (del != NULL)
	{
		current = del;
		del = del->next;
		free(current);
	}
	*head = NULL;
}
