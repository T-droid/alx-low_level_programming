#include "lists.h"

/**
 * add_nodeint - adds head at the beginning
 * @head: pointer with address to head pointer
 * @n: first element of the new node
 * Return: addres of the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = NULL;

	if (*head == NULL)
		*head = ptr;
	else
	{
		ptr->next = *head;
		*head = ptr;
	}
	return (*head);
}
