#include "lists.h"

/**
 * add_dnodeint - adds a node aat the beggining of a linked list
 * @head: pointer to the head pointer
 * @n: data to be inserted in a list
 * Return: pointer to the new head
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *ptr;

	ptr = malloc(sizeof(dlistint_t));
	if (ptr == NULL)
		return (NULL);

	ptr->n = n;
	ptr->prev = NULL;
	ptr->next = NULL;

	if (*head != NULL)
		ptr->next = *head;

	*head = ptr;
	return (*head);
}
