#include "lists.h"

/**
 * delete_nodeint_at_index - dekets node at index of
 * linked list
 * @head: lists head
 * @index: node index
 * Return: 1 (success), 0 (error)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int a;
	listint_t *cat;
	listint_t *node;

	cat = *head;
	if (head == NULL || *head == NULL)
		return (0);
	for (a = 0; a < index - 1 && cat != NULL && index != 0; a++)
		cat = cat->next;
	if (cat == NULL)
		return (0);
	if (index == 0)
	{
		node = cat->next;
		free(cat);
		*head = node;
	}
	else
	{
		if (cat->next == NULL)
			node = cat->next;
		else
			node = cat->next->next;
		free(cat->next);
		cat->next = node;
	}
	return (1);
}
