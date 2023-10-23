#include "lists.h"

/**
 * add_nodeint_end - adds new node at end of a list
 * @head: head of list
 * @n: element n
 * Return: eement
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nuwe;
	listint_t *end;

	nuwe = malloc(sizeof(listint_t));

	if (nuwe == NULL)
		return (NULL);

	end = *head;
	nuwe->n = n;
	nuwe->next = NULL;

	if (*head == NULL)
	{
		*head = nuwe;
	}

	else
	{
		while (end->next != NULL)
			end = end->next;
		end->next = nuwe;
	}

	return (*head);
}
