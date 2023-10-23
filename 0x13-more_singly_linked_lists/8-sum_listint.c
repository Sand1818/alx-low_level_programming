#include "lists.h"

/**
 * sum_listint - sum of all the data (n)
 * of linked list
 * @head: list head
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	int sum;
	sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
