#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at
 * given postion
 * @head: list head
 * @idx: index add to node
 * @n: num in node
 * Return: new node address, NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *hond;
	listint_t *cat = NULL;
	int a = idx;

	if (head == NULL)
		return (NULL);

	for (hond = *head; a && hond != NULL; a--, hond = hond->next)
		cat = hond;
	if (a)
		return (NULL);

	hond = malloc(sizeof(listint_t));
	if (hond == NULL)
		return (NULL);

	if (cat != NULL)
	{
		hond->next = cat->next;
		cat->next = hond;
	}
	else
	{
		hond->next = NULL;
	}
	if (*head == NULL || idx == 0)
	{
		hond->next = *head;
		*head = hond;
	}

	hond->n = n;
	return (hond);
}
