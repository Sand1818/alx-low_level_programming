#include "lists.h"

/**
 * get_dnodeint_at_index - look for a given node
 * @head: head of list
 * @index: index
 * Return: the node in index index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{

	dlistint_t *san = head;
	unsigned int a = 0;

		while (san != NULL)
		{
			if (index == a)
				return (san);
			san = san->next;
			a++;
		}
return (NULL);
}
