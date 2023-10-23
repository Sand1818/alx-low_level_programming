#include "lists.h"

/**
 * listint_len - number of elements in a linked to list
 * @h: linked list
 * Return: num of n
 */

size_t listint_len(const listint_t *h)
{
	int l = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		l++;
		h = h->next;
	}
	return (l);
}
