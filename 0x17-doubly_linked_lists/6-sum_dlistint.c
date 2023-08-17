#include "lists.h"

/**
 * sum_dlistint - function to sum data in a linked list
 * @head: pointer to the first node
 * Return: the sum
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;
	int sum = 0;

	if (head == NULL)
		return (0);

	ptr = head;
	while (ptr)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
