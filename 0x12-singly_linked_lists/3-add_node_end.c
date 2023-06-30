#include "lists.h"

/**
 * add_node_end - adds node at the end of a list
 * @head: double pointer to head
 * @str: string value element
 * Return: addres of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr, *p;

	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
		return (NULL);
	ptr->str = strdup(str);
	ptr->len = _strlen(ptr->str);
	ptr->next = NULL;

	if (*head == NULL)
		*head = ptr;
	else
	{
		p = *head;
		while (p->next)
			p = p->next;
		p->next = ptr;
	}

	return (ptr);
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
