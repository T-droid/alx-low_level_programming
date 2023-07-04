#include "lists.h"

/**
 * free_listint_safe - frees list
 * @h: pointer to head pointer
 * Return: returns size of the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *current;

	while (*h != NULL)
	{
		count++;
		current = *h;
		*h = (*h)->next;
		free(current);
		if (*h < current)
		{
			break;
		}
		current = *h;
	}
	*h = NULL;
	return (count);
}
