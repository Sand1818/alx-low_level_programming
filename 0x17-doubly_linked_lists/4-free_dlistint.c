#include "lists.h"

/**
 * free_dlistint - frees a list
 * @head: header of list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *san = NULL;

	while (head != NULL)
	{
		san = head->next;
		free(head);
		head = san;
	}
}
