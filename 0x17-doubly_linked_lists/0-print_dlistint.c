#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a doubly linked list
 * @h: header of the list
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *p = h;
	unsigned int i = 0;

	while (p != NULL)
	{
		printf("%d\n", p->n);
		p = p->next;
		i++;
	}
return (i);
}
