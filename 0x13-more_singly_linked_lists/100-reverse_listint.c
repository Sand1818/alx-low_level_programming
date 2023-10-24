#include "lists.h"

/**
 * reverse_listint - reverses a linked listt
 * @head: lists head
 * Return: node pointer
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *a;
	listint_t *k;

	a = NULL;
	k = NULL;

	while (*head != NULL)
	{
		k = (*head)->next;
		(*head)->next = a;
		a = *head;
		*head = k;
	}

	*head = a;
	return (*head);
}
