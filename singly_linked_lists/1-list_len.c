#include "lists.h"

/**
 * list_len - function which will return the elements of list_t
 * @h: the number of elements in list_t
 * Return: count
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
