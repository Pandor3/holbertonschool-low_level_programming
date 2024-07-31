#include "lists.h"

/**
 * add_dnodeint - function that adds a new node at the begininning of the list
 * @head: the pointer to dlistint_t list
 * @n: number of elements in dlistint_t list
 * Return: value of nouveau or NULL
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *nouveau;
	int count;

	nouveau = malloc(sizeof(dlistint_t));
	if (nouveau == NULL)
		return (NULL);
	for (count = 0; count != n; count++)
	{
		if (count == n)
		{
			printf("%d\n", count);
		}
	}
	nouveau->n = count;
	nouveau->next = *head;
	nouveau->prev = NULL;
	*head = nouveau;
	return (nouveau);
}
