#include "lists.h"

/**
 * print_dlistint - Function which prints all the elements in dlistint_t
 * @h: pointer to dlistint_t
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
