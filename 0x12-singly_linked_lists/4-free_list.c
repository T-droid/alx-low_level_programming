#include "lists.h"

/**
 * free_list - frees a singly linked list
 * @head: head of a linked list
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *ptr = NULL;

	while (head)
	{
		ptr = head;
		head = head->next;
		free(ptr->str);
		free(ptr);
	}
}
