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

	if (head == NULL)
		return (NULL);
	nouveau = malloc(sizeof(dlistint_t));
	if (nouveau == NULL)
		return (NULL);
	if (*head == NULL)
	{
		nouveau->n = n;
		nouveau->next = NULL;
		nouveau->prev = NULL;
		*head = nouveau;
		return (nouveau);
	}
		nouveau->n = n;
		nouveau->next = *head;
		nouveau->prev = NULL;
		(*head)->prev = nouveau;
		*head = nouveau;
		return (nouveau);
}
