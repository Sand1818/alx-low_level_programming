#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - adds a node to the end of a list
 * @head: double pointer to linked list beggining
 * @n: new node valure
 *
 * Return: pointer to the new node, or NULL on failure
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *curr, *temp;

	if (head == NULL)
		return (NULL);
	curr = malloc(sizeof(dlistint_t));
	if (curr == NULL)
		return (NULL);
	curr->n = n;
	curr->next = NULL;
	if (*head == NULL)
	{
		curr->prev = NULL;
		*head = curr;
		return (curr);
	}
	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = curr;
	curr->prev = temp;
	return (curr);
}
