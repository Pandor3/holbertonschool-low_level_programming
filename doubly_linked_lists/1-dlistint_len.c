#include "lists.h"

/**
 * dlistint_len - function which returns the number of elements in dlinstint_t
 * @h: pointer to the dlistint_t list
 * Return: the number of elements in dlistint_t
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
