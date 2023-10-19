#include "lists.h"

/**
* list_len - function calculating num of elements
* @h: list pointer
* Return: num
*/

size_t list_len(const list_t *h)
{
	int o = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		o++;
		h = h->next;
	}
	return (o);
}
