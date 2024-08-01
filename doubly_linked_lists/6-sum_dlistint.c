#include "lists.h"

/**
 * sum_dlistint - function which will return the sum of n
 * @head: pointer to dlistint_t and its content
 * Return: 0 or result
 */

int sum_dlistint(dlistint_t *head)
{
	int result = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (head->next != NULL)
	{
		result += head->n;
		head = head->next;
	}

	result += head->n;
	return (result);
}
