#include "lists.h"

/**
 * free_listint - frees a list
 * @head: list head
 * Return: no return
 */

void free_listint(listint_t *head)
{
	listint_t *fre;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		fre = head->next;
		free(head);
		head = fre;
	}
	free(head);
}
