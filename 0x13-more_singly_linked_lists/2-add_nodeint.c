#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds node at the beggining
 * @head: pointer to the head pointer
 * @n: data
 * Return: returns head
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr = malloc(sizeof(listint_t));

	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = NULL;

	ptr->next = *head;
	*head = ptr;
	return (*head);
}
