#include "lists.h"

/**
 * free_listint - frees linked list
 * @head: head pointer of list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *p;

	while (head != NULL)
	{
		p = head;
		head = head->next;
		free(p);
	}
}
