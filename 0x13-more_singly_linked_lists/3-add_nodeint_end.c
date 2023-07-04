#include "lists.h"

/**
 * add_nodeint_end - adds node at the end of a list
 * @head: pointer with addres to head pointer
 * @n: first element of the new element
 * Return: addres of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *p;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = NULL;

	if (*head == NULL)
		*head = ptr;
	else
	{
		p = *head;
		while (p->next != NULL)
			p = p->next;
		p->next = ptr;
	}
	return (ptr);
}
