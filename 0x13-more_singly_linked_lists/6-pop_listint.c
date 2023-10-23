#include "lists.h"

/**
 * pop_listint - deletes the head nodes of linked list
 * @head: list head
 * Return: head node's data
 */

int pop_listint(listint_t **head)
{
	int ode;
	listint_t *a;
	listint_t *cat;

	if (*head == NULL)
		return (0);

	cat = *head;

	ode = cat->n;

	a = cat->next;
	free(cat);
	*head = a;

	return (ode);
}
