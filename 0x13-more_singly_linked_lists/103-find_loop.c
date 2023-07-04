#include "lists.h"

/**
 * find_listint_loop - finds loop in a list
 * @head: head pointer
 * Return: addres of the node where the loop starts
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *fast = head, *slow = head;

	while (fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
		{
			while (head != slow)
			{
				head = head->next;
				slow = slow->next;
			}
			return (head);
		}
	}
	return (NULL);
}
