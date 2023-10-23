#include "lists.h"

/**
 * free_listint2 - freess a list
 * @head: list head
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *fre;

	if (*head == NULL)
		return;

	if (head == NULL)
		return;

	while ((*head)->next != NULL)
	{
		fre = (*head)->next;
		free(*head);
		*head = fre;
	}

	free(*head);
	*head = NULL;
}
