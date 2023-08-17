#include "lists.h"

/**
 * print_dlistint - prints a linked list
 * @h: pointer to the head of the list
 * Return: number of lists
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *ptr = h;
	size_t count = 0;

	while (ptr)
	{
		printf("%d\n", ptr->n);
		count++;
		ptr = ptr->next;
	}
	return (count);
}
