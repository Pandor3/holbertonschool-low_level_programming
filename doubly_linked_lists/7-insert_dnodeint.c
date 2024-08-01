#include "lists.h"

/**
 * insert_dnodeint_at_index - function which will add a new node
 * @h: pointer to dlistint_t and its content
 * @idx: index where the node will be added
 * @n: Integer
 * Return: NULL or nouveau
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *nouveau;
	dlistint_t *temp;
	unsigned int count;

	if (h == NULL)
		return (NULL);
	nouveau = malloc(sizeof(dlistint_t));
	if (nouveau == NULL)
		return (NULL);
	nouveau->n = n;
	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	temp = *h;
	for (count = 0; temp != NULL && count < idx; count++)
	{
		temp = temp->next;
		if (temp == NULL)
		{
			free(nouveau);
			return (NULL);
		}
		if (temp->next == NULL)
		{
			return (add_dnodeint_end(h, n));
		}
	}
		nouveau->next = temp->next;
		temp->next->prev = nouveau;
		temp->next = nouveau;
		nouveau->prev = temp;
	return (temp);
}
