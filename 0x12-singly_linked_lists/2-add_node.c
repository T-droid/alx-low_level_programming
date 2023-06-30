#include "lists.h"

/**
 * add_node - adds node at the beginning
 * @head: double pointer to head
 * @str: string value element
 * Return: new head pointer
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr;

	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
		return (NULL);
	ptr->str = strdup(str);
	ptr->len = _strlen(ptr->str);
	ptr->next = *head;

	*head = ptr;
	return (*head);
}

/**
 * _strlen - calculates the length of a string
 * @str: string to be calculated
 * Return: the string length
 */
size_t _strlen(char *str)
{
	size_t i, count = 0;

	for (i = 0 ; str[i] != '\0' ; i++)
		count++;
	return (count);
}
