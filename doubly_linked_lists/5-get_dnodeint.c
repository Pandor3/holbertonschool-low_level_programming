#include "lists.h"

/**
 * get_dnodeint_at_index - function which returns a node
 * @head: pointer to contents of dlistint_t
 * @index: index of nodes
 * Return: count or NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count;

	if (head == NULL)
	{
		return (NULL);
	}

	for (count = 0; count < index; count++)
	{
		if (head->next == NULL && count < index)
		{
			return (NULL);
		}
		head = head->next;
	}
	return (head);
}
