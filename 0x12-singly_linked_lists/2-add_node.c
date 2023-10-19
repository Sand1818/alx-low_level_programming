#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * add_node - adds a new node
 * @head: pointer to list
 * @str: string add in node
 * Return: new element
 */

list_t *add_node(list_t **head, const char *str)
{
	int i;
	int count = 0;
	list_t *new;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		count++;

	new->len = i;
	new->str = strdup(str);
	new->next = *head;

	*head = new;

	return (new);
}
