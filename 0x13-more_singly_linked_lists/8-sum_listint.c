#include "lists.h"

/**
 * sum_listint - sums all data in the linked list
 * @head: head pointer of the list
 * Return: the sum of all data
 */
int sum_listint(listint_t *head)
{
	listint_t *p = head;
	int sum = 0;

	if (head == NULL)
		return (0);
	while (p != NULL)
	{
		sum += p->n;
		p = p->next;
	}
	return (sum);
}
