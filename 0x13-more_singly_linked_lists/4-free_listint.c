#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees alist
 * @head: head pointer
 * Return: void
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
