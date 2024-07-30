#include "lists.h"

/**
 * print_list - Function which prints the elements in list_t
 * @h: The elements in list_t
 * Return: The number of arguments in list_t
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
	if (h->str == NULL)
	{
		printf("[0] (nil)\n");
	}
	else
	{
		printf("[%d] %s\n", h->len, h->str);
	}
	h = h->next;
	count++;
	}
	return (count);
}
