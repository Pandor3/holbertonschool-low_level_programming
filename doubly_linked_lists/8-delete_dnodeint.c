#include "lists.h"

/**
 * delete_dnodeint_at_index - function which deletes nodes
 * @head: pointer to the dlistint_t list
 * @index: integer pointing on nodes to be deleted
 * Return: 1, -1 or temp
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count;
	dlistint_t *temp = *head;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		if (*head != NULL)
		{
		temp->prev = NULL;
		}
		free(temp);
		return (1);
	}
	for (count = 0; temp && count != index; count++)
	{
		temp = temp->next;
	}
		if (temp == NULL)
			return (-1);
		if (temp->prev)
			temp->prev->next = temp->next;
		if (temp->next)
			temp->next->prev = temp->prev;
	free(temp);
	return (1);
}
