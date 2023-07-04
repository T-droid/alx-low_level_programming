#include "lists.h"

/**
 * print_listint_safe - prints a linked list even with loops
 * @head: head pointer to the list
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current, *next_node;
	size_t count = 0;

	if (!head)
		exit(98);
	current = head;
	while (current)
	{
		count++;
		printf("[%p] %d\n", (void *)current, current->n);
		next_node = current->next;
		if (next_node >= current)
		{
			printf("-> [%p] %d\n", (void *)next_node, next_node->n);
			break;
		}
		current = next_node;
	}
	return (count);
}
