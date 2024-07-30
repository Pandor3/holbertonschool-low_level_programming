#include "lists.h"

/**
 * free_list - Function which frees a list
 * @head: content of the list
 */

void free_list(list_t *head)
{
	list_t *freedom;

	while (head != NULL)
	{
	freedom = head->next;
	}
	if (head->str == NULL)
		free(freedom->str);
	free(freedom);
	freedom = head;
}
