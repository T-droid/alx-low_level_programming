#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node_end - adds a node at the end
 *
 * @head: pointer to the head pointer
 * @str: string element
 * Return: returns new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *current;

	if (str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = strlen(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		current = *head;
		while (current->next != NULL)
			current = current->next;
		current->next = new_node;
	}
	return (new_node);
}