#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a list_t list.
 * @head: list pointer
 */

void free_list(list_t *head)
{
	list_t *cat;

	while (head)
	{
		cat = head->next;
		free(head->str);
		free(head);
		head = cat;
	}
}
