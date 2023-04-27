#include "lists.h"
#include <stdlib.h>
/**
 * free_list - frees the list
 *
 * @head: pointer to the list
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *current = head;
	list_t *ptr;

	while (current != NULL)
	{
		ptr = current;
		current = current->next;
		free(ptr->str);
		free(ptr);
	}
}
