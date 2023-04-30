#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - delete head
 * @head: pointer to head pointer
 * Return: head node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (*head == NULL)
		return (0);

	temp = *head;
	data = temp->n;
	*head = (*head)->next;
	free(temp);
	return (data);
}
