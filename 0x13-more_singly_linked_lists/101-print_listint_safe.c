#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_listint_safe - Prints a linked list, even if it has a loop.
 * @head: Pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *node;
	const listint_t *next_node;
	size_t count = 0;

	if (!head)
		exit(98);
	node = head;
	while (node)
	{
		count++;
		printf("[%p] %d\n", (void *)node, node->n);
		next_node = node->next;

		if (next_node >= node)
		{
			printf("-> [%p] %d\n", (void *)next_node, next_node->n);
			break;
		}

		node = next_node;
	}
	return (count);
}
