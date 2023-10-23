#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a list
 * @head: list head
 * @n: element n
 * Return: new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nuwe;

	nuwe = malloc(sizeof(listint_t));
	if (nuwe == NULL)
		return (0);

	nuwe->n = n;
	nuwe->next = *head;
	*head = nuwe;

	return (*head);
}
