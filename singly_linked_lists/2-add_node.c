#include "lists.h"
#include <string.h>

/**
 * add_node - function which will add a new node at the beginning
 * @head: elements in the nodes
 * @str: string in the nodes
 * Return: Address of the new node
 */

list_t *add_node(list_t **head, const char *str)
{
	int count;
	list_t *nouveau;

	if (str == NULL)
		return (NULL);
	nouveau = malloc(sizeof(list_t));
	if (nouveau == NULL)
		return(NULL);

	 nouveau->str = strdup(str);
	if (nouveau->str == NULL)
	{
		free(nouveau);
		return (NULL);
	}
	for (count = 0; str[count] != '\0'; count++)
	{
	}
	nouveau->len = count;
	nouveau->next = *head;
	*head = nouveau;
	return (nouveau);
}
