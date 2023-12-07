#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: double pointer to the list
 * @idx: index of the node to insert
 * @n: data to insert
 * Return: address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int s;
	dlistint_t *curr;
	dlistint_t *tempor = *h;

	curr = malloc(sizeof(dlistint_t));
	if (!curr || !h)
		return (NULL);

	curr->n = n;
	curr->next = NULL;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (s = 0; tempor && s < idx; s++)
	{
		if (s == idx - 1)
		{
			if (tempor->next == NULL)
				return (add_dnodeint_end(h, n));
			curr->next = tempor->next;
			curr->prev = tempor;
			tempor->next->prev = curr;
			tempor->next = curr;
			return (curr);
		}
		else
			tempor = tempor->next;
	}

	return (NULL);
}
