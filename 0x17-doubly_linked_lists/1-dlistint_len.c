#include "lists.h"

/**
 * dlistint_len - Return number of elements in list
 * @h: header of the list
 * Return: unsigned int
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *p = h;
	unsigned int i = 0;

	while (p != NULL)
	{
		p = p->next;
		i++;
	}

	return (i);
}
