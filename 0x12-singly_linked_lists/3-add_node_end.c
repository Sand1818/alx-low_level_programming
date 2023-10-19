#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_node_end - adds new node end of list
 * @head: first node's address
 * @str: string inserted to new node
 * Return: new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int i, n = 0;
	list_t *fresh;
	list_t *cat;

	fresh = malloc(sizeof(list_t));
	if (fresh == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		n++;

	fresh->len = i;
	fresh->str = strdup(str);
	fresh->next = NULL;

	if (*head == NULL)
	{
		*head = fresh;
		return (fresh);
	}

	cat = *head;

	while (cat->next != NULL)
		cat = cat->next;

	cat->next = fresh;

	return (fresh);
}
