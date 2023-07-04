#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: address to head pointer
 * Return: pointer to the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *ptr = NULL, *temp;

	if (*head == NULL)
		return (NULL);
	if ((*head)->next == NULL)
		return (*head);

	temp = (*head)->next;
	while (*head != NULL)
	{
		(*head)->next = ptr;
		ptr = *head;
		*head = temp;
		if (temp != NULL)
			temp = temp->next;
	}
	*head = ptr;
	return (*head);
}
