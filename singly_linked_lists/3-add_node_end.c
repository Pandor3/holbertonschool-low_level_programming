#include "lists.h"
#include <string.h>

/**
 * add_node_end - Function which add a new node
 * @head: content of list_t
 * @str: string of characters in list_t
 * Return: NULL or head
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int count;
	list_t *nouveau;
	list_t *fin;

	if (str == NULL)
		return (NULL);
	nouveau = malloc(sizeof(list_t));
	if (nouveau == NULL)
		return (NULL);
	nouveau->str = strdup(str);
	nouveau->next = 0;
	if (nouveau->str == NULL)
	{
		free(nouveau);
		return (NULL);
	}
	for (count = 0; str[count] != '\0'; count++)
	{
	}
	nouveau->len = count;
	if (*head == NULL)
	{
		*head = nouveau;
	}
	else
	{
		fin = *head;
		while (fin->next != NULL)
		{
			fin = fin->next;
		}
	fin->next = nouveau;
	}

	return (nouveau);
}

