#include "lists.h"

/**
 * pop_listint - deletes head node
 * @head: pointer to head node
 * Return: head nodes data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *p;
	int n = 0;

	if (*head == NULL)
		return (0);
	p = *head;
	*head = (*head)->next;
	n = p->n;
	free(p);
	return (n);
}
