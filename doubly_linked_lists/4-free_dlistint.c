#include "lists.h"

/**
 * free_dlistint - Function which free a node
 * @head: pointer to content of dlistint_t
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *nouveau;

	while (head != NULL)
	{
		nouveau = head->next;
		free(head);
		head = nouveau;
	}
}
