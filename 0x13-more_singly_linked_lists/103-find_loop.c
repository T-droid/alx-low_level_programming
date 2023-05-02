#include "lists.h"
/**
 * find_listint_loop - checks for a loop in the list
 * @head: pointer to the first node
 * Return: head
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head, *fast = head;

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
