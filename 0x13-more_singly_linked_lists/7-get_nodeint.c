#include "lists.h"

/**
 * get_nodeint_at_index - returns nth node in linked list
 * @head: list head
 * @index: node index
 * Return: NULL (_error), nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a;

	for (a = 0; a < index && head != NULL; a++)
	{
		head = head->next;
	}
	return (head);
}
