#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds a node at the end
 * @head: pointer to a head pointer
 * @n: data to be inserted
 * Return: addres of the new elementt
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp;
	listint_t *pt = malloc(sizeof(listint_t));

	if (pt == NULL)
		return (NULL);
	pt->n = n;
	pt->next = NULL;
	
	if (*head == NULL)
	{
		*head = pt;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = pt;
	}
	return (pt);
}
