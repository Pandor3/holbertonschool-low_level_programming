#include "lists.h"

/**
 * add_dnodeint_end - Adds a node at the end of the list
 * @head: pointer to the list
 * @n: content of the list
 * Return: NULL or fin
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *nouveau;
	dlistint_t *fin;

	if (head == NULL)
		return (NULL);

	nouveau = malloc(sizeof(dlistint_t));
	if (nouveau == NULL)
		return (NULL);
	nouveau->n = n;
	nouveau->next = NULL;
	if (*head == NULL)
	{
		nouveau->n = n;
		nouveau->prev = NULL;
		nouveau->next = NULL;
		*head = nouveau;
		return (nouveau);
	}
	else
	{
		fin = *head;
		while (fin->next != NULL)
		{
			fin = fin->next;
		}
		fin->next = nouveau;
		nouveau->prev = fin;
	}
	return (nouveau);
}
