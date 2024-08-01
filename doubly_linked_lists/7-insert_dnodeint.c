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

	if (h == NULL)
		return (NULL);
	while (idx != NULL)
	{
		if (idx == NULL)
			return (NULL);
		*h = *h->next;
		idx++;
	}
	nouveau = malloc(sizeof(dlistint_t));
	nouveau->n = n;
	nouveau->next = *h->next;
	nouveau->prev = *h;

	if (*h->next != NULL)
		*h->next->prev = nouveau;
	*h->next = nouveau;
	return (nouveau);
}
